#include "../inc/header.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL){
        return NULL;
    }
    if (s1 == NULL && s2 != NULL){
        return mx_strcpy(mx_strnew(mx_strlen(s2)),s2);
    }
    if (s1 != NULL && s2 == NULL){
        return mx_strcpy(mx_strnew(mx_strlen(s1)),s1);
    }
    int size = mx_strlen(s1) + mx_strlen(s2);
    char *temp1 = mx_strdup(s1);
    char *temp2 = mx_strdup(s2);
    char *result = mx_strnew(size);
    result = mx_strcat(temp1,temp2);
    return result;
}
