int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int counter = 0;
    for (int i = 0; i < size-1; i++) {
        for (int i = 0; i < size-1; i++) {
            if (mx_strcmp(arr[i], arr[i+1]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;
                counter++;
            }
        }
    }
    return counter;
}
