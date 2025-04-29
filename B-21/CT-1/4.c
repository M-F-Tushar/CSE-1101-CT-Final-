4. Show the output of the following Program:
#include<stdio.h>
int main() {
    int b = 13, c = 18, d = 7, e = 8, m;
    m = b < c ? c > d ? 14 : d > e ? 10 : 13 : 15;
    printf("%d\n", m);
    return 0;
}
/*
tep 1: Variable Initialization

b = 13
c = 18
d = 7
e = 8
Step 2: Expression Evaluation

The expression:

m = b < c ? c > d ? 14 : d > e ? 10 : 13 : 15;
is a nested ternary operator. It can be thought of like:

if (b < c) 
{
    if (c > d) 
    {
        m = 14;
    } 
    else 
    {
        if (d > e) 
        {
            m = 10;
        } 
        else 
        {
            m = 13;
        }
    }
} 
else 
{
    m = 15;
}
Now evaluating step-by-step:

First check b < c → is 13 < 18? → Yes, true.

So now we evaluate the next part: c > d

Now check c > d → is 18 > 7? → Yes, true.

Thus, according to the ternary, since c > d is true, we select 14.

So, m = 14.

Step 3: Output

printf("%d\n", m);
prints:
14
*/
