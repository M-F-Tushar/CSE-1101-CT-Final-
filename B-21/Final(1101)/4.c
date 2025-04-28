
4. a) Compare the following pairs of statements [12 Marks]
i) break and continue

Feature	        break	                                    continue
Usage	        Exits the loop entirely	                    Skips the current iteration
Affects	        Loops (for, while, do-while), switch	    Only loops (for, while, do-while)
After effect	Control moves outside the loop	            Control moves to the next iteration
Example:

for (int i = 0; i < 5; i++) {
    if (i == 2)
        break;
    printf("%d ", i);
}
// Output: 0 1

for (int i = 0; i < 5; i++) {
    if (i == 2)
        continue;
    printf("%d ", i);
}
// Output: 0 1 3 4
ii) while and do-while

Feature	while loop	do-while loop
Condition check	At the beginning	At the end
Execution	May not execute even once	Executes at least once
Example:

int x = 5;
while (x < 5) {
    printf("Hi");
}
// No output

int x = 5;
do {
    printf("Hi");
} while (x < 5);
// Output: Hi

4. b) Program to sort an array and find the maximum value [11 Marks]

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nMaximum value: %d\n", arr[n-1]);

    return 0;
}
4. c) Analyze loops and determine how many times they execute [12 Marks]
i)

int x = 5, y = 50;
while (x <= y)
{
    x = y / x;
}
Step-by-step Execution:

1st: x = 5, y = 50 → x <= y → 5 <= 50 → true → x = 50 / 5 = 10

2nd: x = 10 → 10 <= 50 → true → x = 50 / 10 = 5

3rd: x = 5 → 5 <= 50 → true → x = 50 / 5 = 10

This causes a loop: x alternates between 5 and 10 indefinitely → Infinite Loop

✅ Answer: Infinite loop

ii)

int m = 10, n = 7;
while (m % n >= 0)
{
    m = m + 1;
    n = n + 2;
}
Let’s track each step:


Iteration	m	n	m % n	Condition (>= 0)	Action
1	10	7	3	✅ Yes	m=11, n=9
2	11	9	2	✅ Yes	m=12, n=11
3	12	11	1	✅ Yes	m=13, n=13
4	13	13	0	✅ Yes	m=14, n=15
5	14	15	14	✅ Yes	m=15, n=17
6	15	17	15	✅ Yes	m=16, n=19
7	16	19	16	✅ Yes	m=17, n=21
8	17	21	17	✅ Yes	m=18, n=23
9	18	23	18	✅ Yes	m=19, n=25
10	19	25	19	✅ Yes	m=20, n=27
11	20	27	20	✅ Yes	m=21, n=29
12	21	29	21	✅ Yes	m=22, n=31
And so on... Notice: m % n is always less than n, and modulo of positive numbers is always ≥ 0, so condition never becomes false.

✅ Answer: Infinite loop
