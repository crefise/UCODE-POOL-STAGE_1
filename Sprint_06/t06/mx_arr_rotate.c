#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift) {
    int tempArr[size];
    if(shift > 0) {
        while (shift > size) {
            shift = shift-size;
        }
        for (int i = 0, z = size - shift; i < shift; i++, z++) {
            tempArr[i] = arr[z];
        }
        for (int i = size - (size - shift), z = 0; i < size; i++,z++) {
            tempArr[i] = arr[z];
        }
        for (int i = 0; i < size; i++) {
        arr[i] = tempArr[i];
        }
    }
    else {
        shift *= -1;
        while (shift > size) {
            shift = shift-size;
        }
        for (int i = 0, z = size - shift; i < shift; i++, z++) {
            tempArr[z] = arr[i];
        }
        for (int i = size - (size - shift), z = 0; i < size; i++, z++) {
            tempArr[z] = arr[i];
        }
        for (int i = 0; i < size; i++) {
        arr[i] = tempArr[i];
        }
    }
