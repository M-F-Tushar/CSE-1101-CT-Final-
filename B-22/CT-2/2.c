2. Show the output of the given C program:
c
Copy
Edit
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i = i * 2;
        if (i > 15)
            break;
    } while (1);

    getchar();
    return 0;
}
Step-by-Step Execution:
i = 1 → prints 1, then i = 1 * 2 = 2

i = 2 → prints 2, then i = 2 * 2 = 4

i = 4 → prints 4, then i = 4 * 2 = 8

i = 8 → prints 8, then i = 8 * 2 = 16

i = 16, but since i > 15, the loop breaks.

Output:
Copy
Edit
1
2
4
8
