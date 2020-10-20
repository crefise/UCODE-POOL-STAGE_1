#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    for (int i = 0; s[i]; i++) {
        if (mx_islower((int)s[i])) {
            s[i] = (char)mx_toupper(s[i]);
            continue;
        }
        if (mx_isupper((int)s[i])) {
            s[i] = (char)mx_tolower(s[i]);
            continue;
        }
    }
}
