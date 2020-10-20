#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    int new_size = 0;
    for (int i = 0; i < src->size; i++) {
        int active = src->arr[i];
        for (int z = 0; z < src->size; z++) {
            if (src->arr[z] != (0) && active == src->arr[z] && i != z) {
                src->arr[z] = (0);
                new_size++;
            }
        }
    }
    new_size = src->size - new_size;
    t_intarr *dst = (t_intarr*)malloc(16);
    dst->size = new_size;
    dst->arr = mx_copy_int_arr(src->arr, new_size);
    int z=0;
    for (int i = 0; i < new_size; i++) {
        for (; z < src->size; z++) {
            if (src->arr[z] == (0)) {
                continue;
            }
            else {
                dst->arr[i] = src->arr[z];
                z++;
                break;
            }
        }
    }
    return dst;
}
