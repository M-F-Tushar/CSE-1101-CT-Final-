3. Show the output of the given C program:
c
Copy
Edit
#include <stdio.h>
int main() {
    int weeks = 2, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i)
    {
        printf("Week: %d\n", i);
        for (int j = 1; j <= days_in_week; ++j)
        {
            if (j % 2 == 0 || j > 5) {
                continue;
            }
            printf("Day:%d\n", j);
        }
    }
    return 0;
}
Step-by-Step Execution:
The outer loop runs 2 weeks.

The inner loop runs for 7 days per week but skips:

Even days (j % 2 == 0)

Days greater than 5 (j > 5)

Days printed are only odd numbers ≤ 5 → {1, 3, 5}.

Output:
makefile
Copy
Edit
Week: 1
Day:1
Day:3
Day:5
Week: 2
Day:1
Day:3
Day:5
