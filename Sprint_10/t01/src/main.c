#include "../inc/header.h"
int main(int argc, char *argv[]) {
    if (argc != 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        exit(-1);
    }
    int file1 = open(argv[1], 'r');
    if (file1 < 0) {
        write(2, "mx_cp: src_file: No such file or directory\n", 43);
        return -1;
    }
    int file2 = open(argv[2], O_CREAT | O_WRONLY | O_EXCL , S_IWUSR | S_IRUSR );
    char ch;
    int a;
    while ((a = read(file1,&ch,1) > 0)) {
        write(file2,&ch,1);
    }
    close(file1);
    close(file2);
    return 0;
}
