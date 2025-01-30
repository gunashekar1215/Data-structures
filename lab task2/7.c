#include <stdio.h>

int find_kth_largest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[k - 1];
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    printf("k-th largest: %d\n", find_kth_largest(arr, n, k));
    return 0;
}
