#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    for(int i = 65; i <= 90; i++) {
        char a;
        if(i % 2 != 0) {
            a = i;
        }
        else {
            a = i + 32;
        }
        mx_printchar((char)a);
    }
    write(1, "\n", 1);
}

