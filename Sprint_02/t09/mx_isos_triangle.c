#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    int z = 1;
    for (unsigned int i = 1; i <= length; i++) {
        for (int p = 1; p <= z; p++) {
            mx_printchar(c);
        }
        z++;
        write(1, "\n", 1);
    }
}
