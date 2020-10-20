#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include "stdio.h"
int mx_count_words(const char *str);
char *mx_file_to_str(const char *filename);
char *mx_strcpy(char *dst, const char* src);
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_itoa(int n);
char *mx_strnew(const int size);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
#endif
