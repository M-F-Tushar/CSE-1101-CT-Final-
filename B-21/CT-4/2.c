2. Output of the Given Program
#include<stdio.h>
int fun(int x, int y) {
    if(x == 0)
        return y;
    return fun(x - 1, x + y);
}

int main() {
    printf("%d", fun(4, 3));
    return 0;
}
/*
Step-by-Step Execution
fun(4,3) → calls fun(3, 4+3) = fun(3, 7)

fun(3,7) → calls fun(2, 3+7) = fun(2, 10)

fun(2,10) → calls fun(1, 2+10) = fun(1, 12)

fun(1,12) → calls fun(0, 1+12) = fun(0, 13)

Base Case fun(0,13) returns 13.

Final Output
13
*/
