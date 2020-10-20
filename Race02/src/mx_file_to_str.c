#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
    int file = open(filename, 'r');
    if (file < 0) {
        return NULL;
    }
    char ch;
    int size = 0;
    int a;
    while ((a = read(file,&ch,1) > 0)) {
        size++;
    }
    close(file);
    char *str = mx_strnew(size);
    file = open(filename, 'r');
    a = read(file,str,size);
    close(file);
    return str;
}
