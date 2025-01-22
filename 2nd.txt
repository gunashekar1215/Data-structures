#include <stdio.h>

void delete_at_beginning(int arr[], int *n) {
    for (int i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void delete_at_end(int *n) {
    (*n)--;
}

void delete_at_index(int arr[], int *n, int index) {
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    delete_at_beginning(arr, &n); // Delete first element
    printf("After deleting at beginning: ");
    traverse_array(arr, n);

    delete_at_end(&n); // Delete last element
    printf("After deleting at end: ");
    traverse_array(arr, n);

    delete_at_index(arr, &n, 1); // Delete at index 1
    printf("After deleting at index 1: ");
    traverse_array(arr, n);

    return 0;
}
