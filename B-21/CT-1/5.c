5. Show the output of the following Program:
#include<stdio.h>
int main() {
    int a = 60, b = 9, c = 3;
    printf("a>>1 = %d\n", (a >> c));
    printf("b<<1 = %d", (b << c));
    return 0;
}
Step-by-Step Execution
a >> c → 60 >> 3:

60 (00111100 in binary) >> 3 → 00000111 (which is 7).

b << c → 9 << 3:

9 (00001001 in binary) << 3 → 01001000 (which is 72).

Output
a>>1 = 7
b<<1 = 72
