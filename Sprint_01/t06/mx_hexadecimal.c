#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    for(int i = 48; i <= 57; i++) {
        mx_printchar((char)i);
    }
    for(int i = 65; i <= 70; i++) {
        mx_printchar((char)i);	
    }
    write(1, "\n", 1);
}

