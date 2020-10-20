int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int newElement, location;
    int counter = 0;
    for (int i = 1; i < size; i++)
    {
        char *temp = arr[i];
        newElement = mx_strlen(arr[i]);
        location = i - 1;
        while (location >= 0 && mx_strlen(arr[location]) > newElement)
        {
            counter++;
            arr[location +1 ] = arr[location];
            location = location - 1;
        }
        arr[location+1] = temp;
    }
    return counter;
}
