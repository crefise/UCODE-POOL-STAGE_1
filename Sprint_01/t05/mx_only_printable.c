void mx_printchar(char a);

void mx_only_printable(void) {
    for (int i = 127; i >= 32; i--) {
        char a = (char)i;
        mx_printchar(a);
    }
    write(1, "\n", 1);
}

