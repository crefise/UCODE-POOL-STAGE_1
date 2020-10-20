#include "../inc/header.h"

bool mx_isdigit(char c) {
    char alphabet[] = "0123456789";
    char *letter = alphabet;
    while (*letter != '\0' && *letter != c) {
        ++letter;
    }
    if (*letter) {
        return true;
    }
    return false;
}
