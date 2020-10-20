#include <stdbool.h>
int mx_strcmp(const char *s1, const char *s2) {
    for (int i = 0; i < s1[i]; i++) {
        if (s1[i] == s2[i]) {
            continue;
        } 
        else {
            if ((int)s1[i] > (int)s2[i]) {
                return ((int)s1[i] - (int)s2[i]);
            }
            else {
                return ((int)s1[i] - (int)s2[i]);
            }
        }
    }
    return 0;
}

bool mx_isdigit(int c) {
    for (int i = 48; i <= 57; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
bool mx_isspace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
        return true;
    }
    else {
        return false;
    }
}


int mx_atoi(const char *str) {
    if (mx_strcmp(str, "2147483647") == 0)
        return 2147483647;
    if (mx_strcmp(str, "-2147483648") == 0)
        return -2147483648;
    int result=0, minus = 0;
    for (int z = 0; str[z]; z++) {
        for (int i = 48; i <= 57; i++) {
            if((int)str[z] == 45) {
                minus = 1;
                continue;
            }
            if(mx_isspace(str[z])) {
                continue;
            }
            if(!mx_isdigit(str[z])) {
                if(minus == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if((int)str[z] == i) {
                result += (i - 48);
                if(str[z + 1]){
                    result = result*10;
                }
            }
        }
    }
    if(minus == 1) {
        result *= -1;
    }
    return result;
}
