#include <stdio.h>

void left_shift(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

void right_shift(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    left_shift(arr, n); // Left shift
    printf("After left shift: ");
    traverse_array(arr, n);

    right_shift(arr, n); // Right shift
    printf("After right shift: ");
    traverse_array(arr, n);

    return 0;
}
