
Q5 a) Define user-defined function and built-in function. (07 Marks)
User-defined function: A function created by the user to perform a specific task.

int sum(int a, int b) {
    return a + b;
}
Built-in function: Functions that are provided by C libraries. Example:
int len = strlen("hello");  // strlen is a built-in function

b) Write the correct string handling statement to store the concatenation of strings s1 and s2 in string s3. (08 Marks)
You can use strcpy and strcat functions from <string.h>:
strcpy(s3, s1);    // Copy s1 to s3
strcat(s3, s2);    // Concatenate s2 to s3
Make sure s3 has enough space to hold the combined string.

c) Do you recommend using goto statement in C? Justify your answer. (08 Marks)
Recommendation: Generally, not recommended.

Justification:
It makes code less readable and harder to maintain.
It can lead to "spaghetti code", especially in large programs.
Better alternatives: if, for, while, break, continue, and function calls.
However, it can be useful in special cases like breaking out of nested loops or error handling in resource cleanup.

d) Show the output of the following program: (12 Marks)
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char c[] = "CSTUDAY2023";
    char *p = c;

    printf("%c\n%8c\n", *p, *(p + p[6] - p[1]));
    printf("%8c", *(p + (p[2] - p[1])));
    return 0;
}
Step-by-step analysis:
String: "CSTUDAY2023"
Index-wise:
c[0] = 'C'
c[1] = 'S'
c[2] = 'T'
c[3] = 'U'
c[4] = 'D'
c[5] = 'A'
c[6] = 'Y'
c[7] = '2'
c[8] = '0'
c[9] = '2'
c[10] = '3'
Pointer p points to start of c, i.e., p = &c[0]

1st printf:
printf("%c\n%8c\n", *p, *(p + p[6] - p[1]));
*p → *(&c[0]) = 'C'

p[6] = 'Y' = 89 (ASCII)

p[1] = 'S' = 83 (ASCII)

p + p[6] - p[1] = p + (89 - 83) = p + 6 = &c[6] → *(&c[6]) = 'Y'

So output is:
C
       Y
2nd printf:
printf("%8c", *(p + (p[2] - p[1])));
p[2] = 'T' = 84

p[1] = 'S' = 83

p + (84 - 83) = p + 1 = &c[1] → *(&c[1]) = 'S'

So output is (8 spaces, then S):
       S
✅ Final Output:
C
       Y
       S

