#include <stdio.h>

void insert_at_beginning(int arr[], int *n, int value, int capacity) {
    if (*n == capacity) return; // Check for overflow
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*n)++;
}

void insert_at_end(int arr[], int *n, int value, int capacity) {
    if (*n == capacity) return; // Check for overflow
    arr[*n] = value;
    (*n)++;
}

void insert_at_index(int arr[], int *n, int value, int index, int capacity) {
    if (*n == capacity) return; // Check for overflow
    for (int i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*n)++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;

    insert_at_beginning(arr, &n, 10, 10); // Insert at beginning
    printf("After inserting at beginning: ");
    traverse_array(arr, n);

    insert_at_end(arr, &n, 20, 10); // Insert at end
    printf("After inserting at end: ");
    traverse_array(arr, n);

    insert_at_index(arr, &n, 15, 3, 10); // Insert at index 3
    printf("After inserting at index 3: ");
    traverse_array(arr, n);

    return 0;
}
