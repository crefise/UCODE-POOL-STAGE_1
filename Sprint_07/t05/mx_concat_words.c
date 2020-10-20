#include <stdlib.h>

char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    if(words == NULL) {
        return NULL;
    }
    char *result = NULL;
    for (int i = 0; words[i] != NULL; i++) {
        result = mx_strjoin(result,words[i]);
        if(words[i+1] != NULL){
            result = mx_strcat(result," ");
        }
    }
    mx_strdel(words);
    return result;
}
