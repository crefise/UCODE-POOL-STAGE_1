void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    if (argc < 1)
        return 0;
    for (int i = 1; i < argc; i++) {
        int n = mx_atoi(argv[i]);
        for (int i = 31; i >= 0; i--) {
            int k = n >> i;
            if (k & 1)
                mx_printchar('1');
            else
                mx_printchar('0');
        }
        mx_printchar('\n');
    }
    return 0;
}
