#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long long_adress = (unsigned long)p;
    char *hex_adress = mx_nbr_to_hex(long_adress);
    int size = mx_strlen(hex_adress);
    char *result = mx_strnew(size+2);
    result[0] = '0';
    result[1] = 'x';
    for (int i = 2, z = 0; z < size; i++, z++) {
        result[i]= hex_adress[z];
    }
    return result;
}
