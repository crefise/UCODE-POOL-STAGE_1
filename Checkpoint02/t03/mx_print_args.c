#include <unistd.h>

int mx_strlen(const char *s) { 
    int i=0;
    while (s[i]) {
        i++;
    }
    return i;			
}

void mx_printchar(char c) {
    char text[] = "0";
    text[0] = c;
    write(1, text, 1);
}

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
