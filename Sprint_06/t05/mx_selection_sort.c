int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int i,j;
    int counter = 0;
    int max;
    for(i = 0; i < size - 1; i++) {
        max=i;
            for(j = i + 1; j < size; j++) 
                if (mx_strlen(arr[j]) < mx_strlen(arr[max]) || (mx_strlen(arr[j]) == mx_strlen(arr[max]) && mx_strcmp(arr[j], arr[max]) < 0)){
                    max = j;
                }
                if(arr[i] == arr[max]) {
                    continue;
                }
            counter++;
            char *buf = arr[i];
            arr[i] = arr[max];
            arr[max] = buf;
        }
    return counter;
}
