#include <stdbool.h>

bool mx_islower(int c) { 
    for (int i = 65; i <= 90; i++) {
        if (c == i) {
            return true;
        }
    }
    return false;
}
