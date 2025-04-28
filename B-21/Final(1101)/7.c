

a) Differentiate between array and structure. (08 Marks)

Feature	    Array	                                Structure
Definition	Collection of elements of same type	    Collection of variables of different types
Memory	    Contiguous memory for all elements	    Memory allocated separately for each member
Access	    Indexed using position (e.g., arr[0])	Accessed using member name (e.g., s.name)
Use Case	Storing list of same data (e.g., marks)	Grouping related data (e.g., a record)
Type	    Homogeneous	                            Heterogeneous

b) Show the output of the following program: (13 Marks)

#include <stdio.h>

int main() {
    int result = recursion(5);
    return 0;
}

int recursion(int x) {
    static int y = 0;
    if (x <= 0)
        return 1;

    y = x + y;
    printf("%d\n", y);
    return recursion(x - 2) + recursion(x - 3);
}
🧠 Understand What's Going On:
static int y = 0; → persists between function calls.

On each call (when x > 0):

y = x + y;

print y

recurse into recursion(x - 2) and recursion(x - 3)

🔍 Step-by-step trace:
Let’s evaluate recursion(5).

➤ recursion(5)
x = 5, y = 0 → y = 5, prints 5

calls recursion(3) and recursion(2)

➤ recursion(3)
x = 3, y = 5 → y = 8, prints 8

calls recursion(1) and recursion(0)

➤ recursion(1)
x = 1, y = 8 → y = 9, prints 9

calls recursion(-1) and recursion(-2) → both return 1

→ recursion(1) returns 1 + 1 = 2

➤ recursion(0) → returns 1
→ recursion(3) returns 2 + 1 = 3

➤ recursion(2)
x = 2, y = 9 → y = 11, prints 11

calls recursion(0) and recursion(-1) → both return 1

→ recursion(2) returns 1 + 1 = 2

Now back to recursion(5):

→ recursion(5) returns 3 + 2 = 5

✅ Output Printed:
5
8
9
11
(These are values of y printed during execution.)

c) Write a C program with recursive function to compute the value Xⁿ where n is a positive integer and x has real value. (14 Marks)
Here’s a simple program:

#include <stdio.h>
#include <math.h>

double power(double x, int n) {
    if(n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main() {
    double x = 2.5;
    int n = 3;

    double result = power(x, n);
    printf("%.2lf^%d = %.2lf\n", x, n, result);
    return 0;
}
/*
Step-by-step execution:
We are calculating
2.5 to the power 3.
Call: power(2.5, 3)

n != 0, so it returns 2.5 * power(2.5, 2)

Call: power(2.5, 2)

n != 0, so it returns 2.5 * power(2.5, 1)

Call: power(2.5, 1)

n != 0, so it returns 2.5 * power(2.5, 0)

Call: power(2.5, 0)

n == 0, so it returns 1

Now substitute back:

power(2.5, 0) = 1

power(2.5, 1) = 2.5 * 1 = 2.5

power(2.5, 2) = 2.5 * 2.5 = 6.25

power(2.5, 3) = 2.5 * 6.25 = 15.625

Final result:
Result = 15.625
*/
