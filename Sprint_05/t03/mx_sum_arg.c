#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int sum = 0;
    if ( argc == 1) {
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int status = 1;
        for (int z = 0; z < argv[i][z]; z++) {
            if (z == 0 && (argv[i][0] == '+' || argv[i][0] == '-')) {
                if (argv[i][0] == '+') {
                    argv[i][0] = ' ';
                }
                continue;
            }
            if (!mx_isdigit(argv[i][z])) {
                status = -1;
                break;
            }
        }
        if (status == 1) {
            sum += mx_atoi(argv[i]);
        }
    }
    mx_printint(sum);
    return 1;
}
