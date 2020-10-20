#include "../inc/header.h"

bool mx_isspace(char c) {
    char alphabet[] = " \t\n\v\f\r+-";
    char *letter = alphabet;
    while (*letter != '\0' && *letter != c) {
        ++letter;
    }
    if (*letter) {
        return true;
    }
    return false;
}
