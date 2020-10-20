int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if(str[i] == delimiter) {
            if(i == 0 || !str[i+1]){
                continue;
            }
            if(str[i+1] && str[i] == delimiter && str[i+1] == delimiter) {
                continue;
            }
            count++;
        }
    }
    return count + 1;
}
#include <stdio.h>
int main(){
    char *str = " follow *  the white rabbit ";

    int a = mx_count_words(str, 'z');
    printf("%d", a);

    return 0;


}
