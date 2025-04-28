✅ Question 5
(a) Define Dangling Pointer:
🔹 Definition:
A dangling pointer is a pointer that continues to reference a memory location after it has been freed or deallocated.
🔹 Problem:
Using a dangling pointer can lead to undefined behavior such as crashes or corrupting data.
🔹 Example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr); // memory is freed, ptr becomes dangling

    printf("%d\n", *ptr); // dangerous! accessing freed memory
    ptr = NULL; // ✅ Safe: Now ptr no longer dangles

    return 0;
}
🔹 Solution:
Always set the pointer to NULL after freeing:

free(ptr);
ptr = NULL;
(b) Show the output with justification
i. Code
int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr_arr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_arr);
    }
}
Problem:
Inside the loop, you always print *ptr_arr — but you never move (increment) the pointer to the next element.
Thus, it keeps printing the first element (1) five times.

Output of your code:
1 1 1 1 1
Corrected code:

You should increment the pointer inside the loop:
#include <stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr_arr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_arr);
        ptr_arr++;  // Move the pointer to the next element
    }
}
Now the output will be:

Copy code
1 2 3 4 5

🔸 Explanation:
ptr_arr is initialized to point to arr.

*ptr_arr dereferences and prints the value.

Then we increment the pointer to move to the next element.

ii. Code

int main() {
    char str[] = "CSTU CSE";
    char* ptr = str;
    for (int i = 0; i < strlen(ptr); i++) {
        printf("%c ", *ptr);
    }
}
Problem:
You always print *ptr, but you never move ptr to the next character!
So it prints the first character ('C') repeatedly.

Output of your code:
C C C C C C C C
Here's the corrected version:
You need to increment the pointer inside the loop:

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "CSTU CSE";
    char* ptr = str;
    for (int i = 0; i < strlen(ptr); i++) {
        printf("%c ", *ptr);
        ptr++;  // Move to the next character
    }
}
Output:

C S T U   C S E
(c) Recursive program for sequence:
🔹 Sequence rule:
First 3 numbers: 1 2 3

Next number = product of last 3: 1*2*3 = 6

Then 2*3*6 = 36

Then 3*6*36 = 648, and so on...

🔹 Recursive logic:
t
#include <stdio.h>

int sequence(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return sequence(n - 1) * sequence(n - 2) * sequence(n - 3);
}

int main() {
    int N;
    scanf("%d", &N);
    if (N < 1 || N >= 100)
        printf("Invalid input\n");
    else
        printf("%d\n", sequence(N));
    return 0;
}
✅ Sample Output:
For input 6, output will be:

648
