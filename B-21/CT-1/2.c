2. Show the output of the following Program:
#include<stdio.h>
int main() {
    int i = 4;
    printf("%d %d %d %d %d", i++, ++i, i, i--, i--);
    return 0;
}
/*
Let's step-by-step assume left to right evaluation (even though officially not guaranteed):

i++ → Use i=4, then increment i to 5.

++i → First increment i from 5 to 6, then use 6.

i → Now i is 6, so use 6.

i-- → Use i=6, then decrement i to 5.

i-- → Use i=5, then decrement i to 4.

🛠 So values printed would be:

4 6 6 6 5
    */
