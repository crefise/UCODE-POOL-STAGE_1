#ifndef LIST_H
#define LIST_H
typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;
#include <stdlib.h>
t_list *mx_create_node(void *data);
#endif
