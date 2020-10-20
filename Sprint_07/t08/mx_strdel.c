#include "stdlib.h"
#include "stdio.h"

void mx_strdel(char **str) {
    if (*str) {
        free(*str);
        *str = NULL;
    }
}
