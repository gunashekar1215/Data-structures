#include <stdio.h>

int remove_duplicates(int arr[], int n, int result[]) {
    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        result[k++] = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
            }
        }
    }
    return k;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];
    int new_size = remove_duplicates(arr, n, result);

    for (int i = 0; i < new_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
