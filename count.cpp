int count(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 5) {
            count++;
        }
    }
    return count;
}