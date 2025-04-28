
a) Why is a recursive function better than a loop? (10 Marks)
Recursive Function Advantages:

Simpler code for problems that are naturally recursive (e.g., factorial, Fibonacci, tree traversal).

Makes code more readable and elegant.

Breaks problems into smaller subproblems.

Preferred in divide and conquer algorithms (e.g., quicksort, mergesort).

Example:

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1);
}
However:

It uses more stack memory.

May be slower than loops for very large problems.

b) Briefly explain call by value and call by reference with proper examples. (12 Marks)
Call by Value:

A copy of the actual argument is passed.

Changes made in the function do not affect the original value.

void modify(int a) {
    a = 10;
}

int main() {
    int x = 5;
    modify(x);
    printf("%d", x);  // Output: 5
}
Call by Reference:

The address (reference) of the argument is passed.

Changes made in the function affect the original variable.

void modify(int *a) {
    *a = 10;
}

int main() {
    int x = 5;
    modify(&x);
    printf("%d", x);  // Output: 10
}
c) Show the output of the following program: (13 Marks)

#include <stdlib.h>
#include <stdio.h>

int func(int c) {
    if(c == 0)
        return c;
    else {
        int value = func(c - 1);
        printf("%d ", value);
        return c;
    }
}

int main() {
    int x = func(5);
    printf("%d", x);
}
/*
🔁 Manual Iteration (Call Stack Simulation):
We'll trace each function call from main().

➤ main() calls func(5)
c = 5, not 0 → go to else

call func(4)

➤ func(4)
c = 4, not 0 → call func(3)

➤ func(3)
c = 3, not 0 → call func(2)

➤ func(2)
c = 2, not 0 → call func(1)

➤ func(1)
c = 1, not 0 → call func(0)

➤ func(0)
c == 0, so return 0 (base case)

Now we go back up the stack, step by step.

⬅️ Back to func(1)
Got value = 0 from func(0)

print 0

return 1

⬅️ Back to func(2)
Got value = 1

print 1

return 2

⬅️ Back to func(3)
Got value = 2

print 2

return 3

⬅️ Back to func(4)
Got value = 3

print 3

return 4

⬅️ Back to func(5)
Got value = 4

print 4

return 5

⬅️ Back to main()
Got x = 5 from func(5)

print 5

✅ Final Output:
0 1 2 3 4 5
💡 Visual of Call Stack (Short Summary):
scss
Copy
Edit
func(5)
 └── func(4)
      └── func(3)
           └── func(2)
                └── func(1)
                     └── func(0) → returns 0
                ← prints 0, returns 1
           ← prints 1, returns 2
      ← prints 2, returns 3
  ← prints 3, returns 4
← prints 4, returns 5
main() prints 5
*/

