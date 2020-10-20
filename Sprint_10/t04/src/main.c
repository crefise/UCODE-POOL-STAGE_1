#include "../inc/header.h"
int main(int argc, char *argv[]) {
    if (argv == NULL)
        exit(0);
    int byte = 0;
    int line = 0;
    int words = 0;
    char *byte_char = NULL;
    char *line_char = NULL;
    char *words_char = NULL;
    if (argc == 1) {
        bool state = true;
        int i = 0;
        char ch;
        while(read(0,&ch,1)){
            byte++;
            if (ch == '\n')
                line++;
            if (mx_isspace(ch))
                state = true;
            else if (state == true) {
                state = false;
                    ++words;
            }
            ++i;
        }
        byte_char = mx_itoa(byte);
        line_char = mx_itoa(line);
        words_char = mx_itoa(words);
        write(1, "\t", 1);
        write(1,line_char,mx_strlen(line_char));
        write(1, "\t", 1);
        write(1,words_char,mx_strlen(words_char));
        write(1, "\t", 1);
        write(1,byte_char,mx_strlen(byte_char));
        write(1, "\n", 1);
    }
    int total_byte = 0;
    int total_line = 0;
    int total_words = 0;
    for (int i = 1; i < argc; i++) {
        char *str = mx_file_to_str(argv[i]);
        byte = 0;
        line = 0;
        words = mx_count_words(str);
        for (int i = 0; i < mx_strlen(str); i++) {
            byte++;
            if(str[i] == '\n')
                line++;
        }
        if (argc > 2) {
            total_byte += byte;
            total_line += line;
            total_words += words;
        }
        byte_char = mx_itoa(byte);
        line_char = mx_itoa(line);
        words_char = mx_itoa(words);
        write(1, "\t", 1);
        write(1,line_char,mx_strlen(line_char));
        write(1, "\t", 1);
        write(1,words_char,mx_strlen(words_char));
        write(1, "\t", 1);
        write(1,byte_char,mx_strlen(byte_char));
        write(1, " ", 1);
        write(1,argv[i],mx_strlen(argv[i]));
        write(1, "\n", 1);
    }
    if (argc > 2) {
        char *total_byte_char = mx_itoa(total_byte);
        char *total_line_char = mx_itoa(total_line);
        char *total_words_char = mx_itoa(total_words);
        write(1, "\t", 1);
        write(1,total_line_char,mx_strlen(total_line_char));
        write(1, "\t", 1);
        write(1,total_words_char,mx_strlen(total_words_char));
        write(1, "\t", 1);
        write(1,total_byte_char,mx_strlen(total_byte_char));
        write(1, " ", 1);
        write(1,"total",5);
        write(1, "\n", 1);
    }
    return 0;
}
