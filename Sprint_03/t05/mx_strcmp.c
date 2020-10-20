int mx_strcmp(const char *s1, const char *s2) {
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] == s2[i]) {
            continue;
        } 
        else {
            if ((int)s1[i] > (int)s2[i]) {
                return 1;
            }
            else {
                return -1;
            }
        }
    }
    return 0;
}
