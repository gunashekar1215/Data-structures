#include <stdio.h>

void find_frequency(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("Element %d: %d times\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    find_frequency(arr, n);
    return 0;
}
