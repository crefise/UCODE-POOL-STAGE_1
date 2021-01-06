#include <unistd.h>

void mx_printchar(char c);

void mx_cube(int n) {
    if(n < 2) {
        return;
    }
    int space= n / 2 + 1;
    int vertic = 0;
    for (int i = 0; i < space; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    for (int i = 0; i < 2 * n; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    write(1,"\n",1);
    space--;
    for (int p = 0; p < n / 2; p++) {
        for (int i = 0; i < space; i++) {
            mx_printchar(' ');
        }
        space--;
        mx_printchar('/');
        for (int i = 0; i < 2 * n; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int i = 0; i < p; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        vertic++;
        write(1,"\n",1);
    }
    mx_printchar('+');
    for (int i = 0; i < 2*n; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    for (int i = 0; i < n / 2; i++)
    {
        mx_printchar(' ');
    }
    vertic++;
    mx_printchar('|');
    write(1,"\n",1);
    int tempSpace = 1;
    for (int l = 0; l < n; l++) {
        mx_printchar('|');
        for (int i = 0; i < 2 * n; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        if (vertic <= n) {
            for (int i = 0; i < (int)(n / 2); i++) {
                mx_printchar(' ');
            }
        }
        if (vertic < n) {
            
            mx_printchar('|');
            vertic++;
            write(1,"\n",1);
            continue;
        }
        if (n  == vertic) {
            vertic++;
            mx_printchar('+');
        }
        else {
            for (int i = 1; i <= (int)(n / 2)-tempSpace; i++) {
                mx_printchar(' ');
            }
            tempSpace++;
            mx_printchar('/');
        }
    write(1,"\n",1);
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    write(1,"\n",1);
}
