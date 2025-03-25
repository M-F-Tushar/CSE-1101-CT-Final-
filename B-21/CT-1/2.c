
#include<stdio.h>
int main() {
    int i = 4;
    printf("%d %d %d %d %d", i++, ++i, i, i--, i--);
    return 0;
}
Step-by-Step Execution
i = 4 initially.

Function parameters are evaluated in an unspecified order in C.

Possible order of execution and values:

i++ → Post-increment, returns 4, then i = 5.

++i → Pre-increment, i = 6, returns 6.

i → 6.

i-- → Post-decrement, returns 6, then i = 5.

i-- → Post-decrement, returns 5, then i = 4.

Possible Output (due to unspecified order)
Copy
Edit
6 6 6 5 4
or another valid order-based output.
