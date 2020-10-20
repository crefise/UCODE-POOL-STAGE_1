#include "../inc/header.h"
int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    int file = open(argv[1], 'r');
    if (file < 0) {
        write(2, "error\n", 7);
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
