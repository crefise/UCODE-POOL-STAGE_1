#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
#endif
