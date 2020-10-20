#include "../inc/header.h"
int main(int argc, char *argv[]) {
    if (argc == 1) {
        int n_ch;
        while(read(0,&n_ch,1)){
            write(1,&n_ch,1);
        }
        return 0;
    }
    if (argc > 2)
        return (0);
    int file = open(argv[1], 'r');
    if (file < 0) {
        write(2, "mx_cat: asdfg: No such file or directory\n", 41);
        return -1;
    }
    char ch;
    int a;
    while ((a = read(file,&ch,1) > 0)) {
        mx_printchar(ch);
    }
    close(file);
    return 0;
}
 
