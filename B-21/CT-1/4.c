4. Show the output of the following Program:
#include<stdio.h>
int main() {
    int b = 13, c = 18, d = 7, e = 8, m;
    m = b < c ? c > d ? 14 : d > e ? 10 : 13 : 15;
    printf("%d\n", m);
    return 0;
}
/*
Step-by-Step Execution
b < c → 13 < 18 → true, so evaluate c > d ? 14 : d > e ? 10 : 13.
c > d → 18 > 7 → true, so result is 14.

Output
14
*/
