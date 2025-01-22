#include <stdio.h>

void sort_indices(int arr[], int n, int is_odd) {
    for (int i = (is_odd ? 1 : 0); i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort_indices(arr, n, 1); // Sort odd indices
    printf("After sorting odd indices: ");
    traverse_array(arr, n);

    sort_indices(arr, n, 0); // Sort even indices
    printf("After sorting even indices: ");
    traverse_array(arr, n);

    return 0;
}
