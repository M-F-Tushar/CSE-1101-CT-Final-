1. Call by Value vs. Call by Reference in C
In C, functions can pass arguments using Call by Value or Call by Reference.

Call by Value
A copy of the actual parameter is passed to the function.

Changes made inside the function do not affect the original value.

Used for primitive data types.

Example (Call by Value)
c
Copy
Edit
#include <stdio.h>

void modify(int num) {
    num = num + 10;  // Changes only the local copy
    printf("Inside function: %d\n", num);
}

int main() {
    int x = 5;
    modify(x);
    printf("After function call: %d\n", x);
    return 0;
}
Output
pgsql
Copy
Edit
Inside function: 15
After function call: 5
Explanation: The original x remains unchanged.

Call by Reference
Instead of passing a copy, the memory address of the variable is passed.

Changes made inside the function affect the original value.

Achieved using pointers (*).

Example (Call by Reference)
c
Copy
Edit
#include <stdio.h>

void modify(int *num) {
    *num = *num + 10;  // Modifies the original value
    printf("Inside function: %d\n", *num);
}

int main() {
    int x = 5;
    modify(&x);
    printf("After function call: %d\n", x);
    return 0;
}
Output
pgsql
Copy
Edit
Inside function: 15
After function call: 15
Explanation: The function modifies x because we pass its memory address.
