4. Write a program to sort an array and find the maximum value.
Answer (Using Bubble Sort):

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {12, 4, 7, 9, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum value: %d\n", arr[n-1]);

    return 0;
}
Step-by-Step Execution:
Sorting (Bubble Sort):

Compare adjacent elements and swap if needed.

Repeat until the array is sorted.

Finding Maximum:

The last element in a sorted array is the maximum.

Output:

Sorted array: 3 4 7 9 12 15
Maximum value: 15
