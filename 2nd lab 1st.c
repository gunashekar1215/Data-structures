1)Write a function to find moving average, input the value of n through user.

#include <stdio.h>

void moving_average(int arr[], int n, int window_size) {
    for (int i = 0; i <= n - window_size; i++) {
        float sum = 0;
        for (int j = 0; j < window_size; j++) {
            sum += arr[i + j];
        }
        printf("%.2f ", sum / window_size);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int window_size = 3;
    moving_average(arr, n, window_size);
    return 0;
}


