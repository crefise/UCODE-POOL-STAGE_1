#include <unistd.h>

int mx_printstr(const char *s);

void mx_is_positive(int i) {
    if (i < 0) {
        mx_printstr("negative");
    }
    else if (i > 0) {
        mx_printstr("positive");
    }
    else {
        mx_printstr("zero");
    }
    write(1, "\n", 1);
}
