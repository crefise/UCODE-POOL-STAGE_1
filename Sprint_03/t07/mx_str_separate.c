#include <unistd.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    for (int i = 0; str[i]; i++) {
        if(str[i] == delim) {
            if (str[i+1] && (str[i]!=str[i+1])) {
                write(1,"\n",1);
            }
            continue;
        }
        mx_printchar(str[i]);
    }
    write(1,"\n",1);
}
