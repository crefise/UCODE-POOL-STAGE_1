int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);

#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int z = 0; z < argc-1; z++) {
        for (int i = 1; i < argc-1; i++) {
            if(mx_strcmp(argv[i],argv[i+1]) > 0) {
                char *text = argv[i+1];
                argv[i+1] = argv[i];
                argv[i] = text;
            }
        }
    }
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
