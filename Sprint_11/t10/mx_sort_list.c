#include "list.h"
t_list *mx_sort_list(t_list *list, bool(*cmp)(void *a, void *b)) {
    if (list == NULL || cmp == NULL)
        return NULL;
    t_list *temp = list;
    for (t_list *i = temp; i->next; i = i->next) {
        for (t_list *z = i->next; z; z = z->next) {
            if (cmp(i->data, z->data)) {
                void *temp = i->data;
                i->data = z->data;
                z->data = temp;
            }
        }
    }
}
