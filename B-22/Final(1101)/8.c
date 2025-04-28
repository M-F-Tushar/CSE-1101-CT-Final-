✅ Question 8
(a) Define Recursive Function [07 Marks]
🔹 Definition:
A recursive function is a function that calls itself to solve a smaller subproblem of the original task, until it reaches a base condition.

🔹 Example:

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;           // base case
    else
        return n * factorial(n - 1);  // recursive case
}

int main() {
    printf("%d\n", factorial(5));  // Output: 120
    return 0;
}
🔹 Output:

120
(b) Multiply two 3×4 arrays and store in a 2D array C
Given:

Arrays A and B are 3×4

Compute: C = A + 2B (element-wise)

✅ Code:

#include <stdio.h>

int main() {
    int A[3][4], B[3][4], C[3][4];

    // Input A
    printf("Enter elements for array A (3x4):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &A[i][j]);

    // Input B
    printf("Enter elements for array B (3x4):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &B[i][j]);

    // Compute C = A + 2 * B
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = A[i][j] + 2 * B[i][j];

    // Output C
    printf("Resulting array C:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
(c) State and explain any three string functions [08 Marks]
✅ 1. strlen(str)
Returns the length of a string.

strlen("hello");  // returns 5
✅ 2. strcpy(dest, src)
Copies src string into dest.


char str1[20], str2[] = "copy this";
strcpy(str1, str2);
✅ 3. strcmp(str1, str2)
Compares two strings.

Returns 0 if equal

Negative if str1 < str2

Positive if str1 > str2

strcmp("apple", "banana");  // returns negative
(d) Output of the Recursive Program [12 Marks]
🔹 Code:

#include <stdio.h>

int Myfunc(int n);

int main() {
    Myfunc(7);
    return 0;
}

int Myfunc(int n) {
    if (n == 0)
        return n;
    else {
        int value = Myfunc(n - 1);
        printf("%d ", value);
        return n;
    }
}
🔸 Execution Trace:
Myfunc(7)

Myfunc(6)

Myfunc(5)

Myfunc(4)

Myfunc(3)

Myfunc(2)

Myfunc(1)

Myfunc(0) → returns 0

prints 0, returns 1

prints 1, returns 2

prints 2, returns 3

prints 3, returns 4

prints 4, returns 5

prints 5, returns 6

prints 6, returns 7

✅ Output:

0 1 2 3 4 5 6
