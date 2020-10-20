char *mx_strchr(const char *s, int c);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    argc++;
    char *text = argv[0];
    while (mx_strchr(text,'/')) {
        text = mx_strchr(text,(int)'/');
        text++;
    }
    mx_printstr(text);
    mx_printchar('\n');
    return 0;
}
