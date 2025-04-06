3. Show the output of the following Program:

#include<stdio.h>
int main() {
    int i = -1, j = -1, k = 2, l = 5, m;
    m = i++ && ++j || k++ && --l;
    printf("%d %d %d %d %d", i, j, k, l, m);
    return 0;
}
/*
Step-by-Step Execution
i++: -1 && (post-increments i to 0 but evaluates as true).

++j: j = 0, evaluates as false, so the first part i++ && ++j is false.

Since false ||, we move to k++ && --l:

k++: 2 &&, post-increments k = 3 but evaluates as true.

--l: l = 4, evaluates as true, so true && true = true.

m = 1.

Final Values
i = 0, j = 0, k = 3, l = 4, m = 1
Output
0 0 3 4 1
*/
