1. Output of the Given Program
#include <stdio.h>
int main() {
    int weeks = 2, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i) {
        printf("Week: %d\n", i);
        for (int j = 1; j <= days_in_week; ++j) {
            if (j % 2 == 0) {
                continue;  // Skips even days
            }
            printf(" Day:%d\n", j);
        }
    }
    return 0;
}
Step-by-Step Execution
Outer loop (i from 1 to 2):

Week: 1

Week: 2

Inner loop (j from 1 to 7):

if (j % 2 == 0), continue; skips even days.

Prints only odd days (1, 3, 5, 7).

Final Output
Week: 1
 Day:1
 Day:3
 Day:5
 Day:7
Week: 2
 Day:1
 Day:3
 Day:5
 Day:7
