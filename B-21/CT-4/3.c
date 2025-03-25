3. Output of the Given Recursive Program
c
Copy
Edit
#include<stdio.h>

int recursion(int x) {
    static int y = 0;  // Static variable retains value
    if(x <= 0) return 1;
    y = x + y;
    printf("%d\n", y);
    return recursion(x - 2) + recursion(x - 3);
}

int main() {
    int result = recursion(5);
    return 0;
}
Step-by-Step Execution
recursion(5) → y = 5 + 0 = 5, prints 5

Calls recursion(3) → y = 3 + 5 = 8, prints 8

Calls recursion(1) → y = 1 + 8 = 9, prints 9

Calls recursion(-1) → returns 1

Calls recursion(-2) → returns 1

recursion(1) returns 1 + 1 = 2

Calls recursion(0) → returns 1

Calls recursion(-1) → returns 1

recursion(3) returns 2 + 1 = 3

Calls recursion(2) → y = 2 + 9 = 11, prints 11

Calls recursion(0) → returns 1

Calls recursion(-1) → returns 1

recursion(2) returns 1 + 1 = 2

recursion(5) returns 3 + 2 = 5

Printed Output
Copy
Edit
5
8
9
11

