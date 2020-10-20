int mx_strlen(const char *str) {
    for (const char * c = str; ; c++) if (!*c) return c - str;
}
