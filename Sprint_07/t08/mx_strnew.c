#include "stdlib.h"

char *mx_strnew(const int size) {
    char *arr = NULL;
    int i = 0;
    if (size < 0) return NULL;
    arr = (char *)malloc((size + 1));
    while (i < size) {
        arr[i] = '\0';
        i++;
    }
    arr[i] = '\0';
    return arr;
}
