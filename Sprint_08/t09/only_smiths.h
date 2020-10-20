#ifndef ONLY_SMITHS_H
#define ONLY_SMITHS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "agent.h"
void mx_exterminate_agents(t_agent ***agents);
int mx_strcmp(const char *s1, const char *s2);
t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);

#endif
