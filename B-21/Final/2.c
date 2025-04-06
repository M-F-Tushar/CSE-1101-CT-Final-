/*
2. Print Fibonacci Series up to N Terms
Explanation:
The Fibonacci series starts with 0 and 1, and each subsequent number is the sum of the previous two (e.g., 0, 1, 1, 2, 3, 5,...).
Steps:

Take input for n (the number of terms).

Use a loop to generate the Fibonacci sequence.

Print the sequence.
*/
#include <stdio.h>

int main() {
    int first = 0, second = 1, count = 0, fibo, n;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    while (count < n) {
        if (count <= 1) {
            fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        count++;
    }

    return 0;
}
/*
Suppose,the loop runs n times. Let's trace it for n = 7:

count	first	second	fibo Calculation	fibo Output
0	    -	    -	    fibo = 0	            0
1	    -	    -	    fibo = 1	1
2	    0	    1	    fibo = 0 + 1 = 1	    1
3	    1	    1	    fibo = 1 + 1 = 2	    2
4	    1	    2	    fibo = 1 + 2 = 3	    3
5	    2	    3	    fibo = 2 + 3 = 5	    5
6	    3	    5	    fibo = 3 + 5 = 8	    8
*/
