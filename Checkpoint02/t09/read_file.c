#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


void mx_printchar(char c) {
    char text[] = "0";
    text[0] = c;
    write(1, text, 1);
}

int main(int argc, const char *argv[]) {
    int fOpen = 0;
    char buffer;
    ssize_t ref;
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return 0;
    } else if ((fOpen = open(argv[1], O_RDONLY)) == -1) {
        write(2, "error\n", 6);
        return 0;
    } else {
        fOpen = open(argv[1], O_RDONLY);
        while ((ref = read(fOpen, &buffer, 1)) > 0) {
            write(1, &buffer, 1);
            if (ref < 0) {
                write(2, "error\n", 6);
                return -1;
        }
    }
    }
    close(fOpen);
    return 0;
}
