#include <unistd.h>

void mx_matrix_voice(void) {
    char beep[] = "\a";
    write(1, beep, 1);
}
