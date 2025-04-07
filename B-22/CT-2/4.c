4. Write a program to sort an array and find the maximum value.
#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Take input for the array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Take input for the array elements
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // After sorting, the last element is the maximum value
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Maximum value (last element in sorted array)
    printf("Maximum value in the array: %d\n", arr[n - 1]);

    return 0;
}
Let's say we have the following array of integers:
Array: [3, 1, 5, 2, 4]
Step-by-Step Explanation:
Initial Array:
[3, 1, 5, 2, 4]
Bubble Sort:
The goal of Bubble Sort is to repeatedly compare adjacent elements and swap them if they are in the wrong order. This process is repeated until the array is sorted.

First Pass (i = 0):

We will compare each element with the next one and swap if needed.

Compare arr[0] (3) and arr[1] (1):

3 > 1, so swap.

New array: [1, 3, 5, 2, 4]

Compare arr[1] (3) and arr[2] (5):

3 < 5, no swap needed.

Array remains: [1, 3, 5, 2, 4]

Compare arr[2] (5) and arr[3] (2):

5 > 2, so swap.

New array: [1, 3, 2, 5, 4]

Compare arr[3] (5) and arr[4] (4):

5 > 4, so swap.

New array: [1, 3, 2, 4, 5]

After the first pass, the largest element (5) has "bubbled up" to the last position of the array.

Second Pass (i = 1):

Compare arr[0] (1) and arr[1] (3):

1 < 3, no swap needed.

Array remains: [1, 3, 2, 4, 5]

Compare arr[1] (3) and arr[2] (2):

3 > 2, so swap.

New array: [1, 2, 3, 4, 5]

Compare arr[2] (3) and arr[3] (4):

3 < 4, no swap needed.

Array remains: [1, 2, 3, 4, 5]

After the second pass, the array looks like this:

[1, 2, 3, 4, 5]
Now the second largest element (4) is in the second-to-last position.

Third Pass (i = 2):

Compare arr[0] (1) and arr[1] (2):

1 < 2, no swap needed.

Array remains: [1, 2, 3, 4, 5]

Compare arr[1] (2) and arr[2] (3):

2 < 3, no swap needed.

Array remains: [1, 2, 3, 4, 5]

After the third pass, the array is still sorted:
[1, 2, 3, 4, 5]
The third largest element (3) is in the correct position.

Fourth Pass (i = 3):

Compare arr[0] (1) and arr[1] (2):

1 < 2, no swap needed.

Array remains: [1, 2, 3, 4, 5]

After this pass, the array is still sorted:

[1, 2, 3, 4, 5]
Final Sorted Array:
After all passes, the array is now completely sorted:

[1, 2, 3, 4, 5]
The maximum value is now at the last index of the array, which is arr[4] = 5.
