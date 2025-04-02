#include <stdio.h>

// Function to perform optimized selection sort
void optimizedSelectionSort(int arr[], int n) {
    int i, minIdx, maxIdx, temp;

    for (i = 0; i < n / 2; i++) {
        minIdx = i;
        maxIdx = i;

        // Find min and max in the remaining unsorted part
        for (int j = i; j < n - i; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
            if (arr[j] > arr[maxIdx])
                maxIdx = j;
        }

        // Swap min element with first unsorted element
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }

        // Adjust maxIdx if it was swapped
        if (maxIdx == i)  
            maxIdx = minIdx;

        // Swap max element with last unsorted element
        if (maxIdx != n - i - 1) {
            temp = arr[n - i - 1];
            arr[n - i - 1] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[] = {56, 29, 12, 22, 11, 70, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    optimizedSelectionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
