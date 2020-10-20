#include "../inc/header.h"

int main(int argc, char* argv[]){
    int file = 0;
    //char buff;
    file = open(argv[1], O_RDONLY);
    if(argc != 6){
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]");
        exit(1);
    }
    char *str = mx_file_to_str(argv[1]);
    int row = 0;
    int point = 0;
    int col = 0;
    int col_temp = 0;
    for (int i = 0; i < mx_strlen(str); i++) {
        if(str[i] == '.')
            point++;
        if (str[i] == ',')
            col_temp++;
        if (str[i] == '\n') {
            if (col != 0 && col != col_temp) {
                mx_printerr("map error\n");
                exit(-1);
            }
            row++;
            col = col_temp;
            col_temp = 0;
        }
    }
    col++;
    row++;
    printf("COL: %d  ROW: %d\n", col,row);
    char arr[row][col];
    int iterator = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (str[iterator] == '\n' || str[iterator] ==',') {
                iterator++;
                
            }
            arr[i][j] = str[iterator];
            iterator++;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
     printf("\n\n\n\n");
    int num_arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == '#') {
                num_arr[i][j] = -2;
                continue;
            }
            if (arr[i][j] == '.') {
                num_arr[i][j] = -1;
                continue;
            }
            
        }
    }
    num_arr[mx_atoi(argv[2])][mx_atoi(argv[3])] = 0;
    //num_arr[mx_atoi(argv[4])][mx_atoi(argv[5])] = -5;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", num_arr[i][j]);
        }
        printf("\n");
    }
    point = point-2;
    int in = 0;
    for (int used_point = 0; used_point < point;) {
        for (int i = 0; i < row; i++) {
           for (int j = 0; j < col; j++) {
               if(num_arr[i][j] >= 0) {
                    if ((i - 1 > 0) && (num_arr[i - 1][j] == -1)) {
                       num_arr[i - 1][j] = num_arr[i][j] + 1;
                       used_point++;
                       in = 1;
                    }
                    if ((i + 1 != row) && (num_arr[i + 1][j] == -1)) {
                       num_arr[i + 1][j] = num_arr[i][j] + 1;
                       used_point++;
                       in = 1;
                    }
                    if ((j - 1 > 0) && (num_arr[i][j - 1] == -1)) {
                       num_arr[i][j - 1] = num_arr[i][j] + 1;
                       used_point++;
                       in = 1;
                    }
                    if ((j + 1 != col) && (num_arr[i][j + 1] == -1)) {
                       num_arr[i][j + 1] = num_arr[i][j] + 1;
                       used_point++;
                       in = 1;
                    }
               }
           }
        }
        if (in == 0) {
            break;
        }
        in = 0;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d ", num_arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    
   close(file);
}
