#ifndef HEADER_H
#define HEADER_H

#include "stdio.h"
#include "stdbool.h"
#include "unistd.h"
#include "stdlib.h"
#include "fcntl.h"
char *mx_file_to_str(const char *filename);
void mx_printerr(const char *s);
int mx_strlen(const char *str);
int mx_atoi(const char *str);
bool mx_isdigit(char c);
bool mx_isspace(char c); 
char *mx_strnew(const int size);

#endif
