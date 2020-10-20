#include <stdlib.h>
char *mx_strnew(const int size) {
    char *newstr = (char *)malloc(size + 1);
    for (int i = 0; i <= size; i++)
        newstr[i] = '\0';
    return newstr;
}

int mx_strlen(const char *s) {
    int i=0;
    while (s[i]) {
        i++;
    }
    return i;			
}

char *mx_strcpy(char *dst, const char* src) {
    for (int i = 0; src[i] ; i++) {
        dst[i] = src[i];
    }
    return dst;
}


char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *result = mx_strnew(size);
    return (mx_strcpy(result,str));
}
