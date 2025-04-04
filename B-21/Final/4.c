4. Determine the Final Condition of a Bulb in a Corridor
Explanation:
Each bulb in a corridor starts off. Rinku toggles the switches based on their divisibility by step count.

If a bulb's position is toggled an odd number of times, it remains on.

If toggled an even number of times, it remains off.

A bulb at position n will be on only if n is a perfect square (since perfect squares have an odd number of divisors).

Steps:

Read an integer n.

Check if n is a perfect square.

If it is, print "yes", else print "no".

#include <stdio.h>
#include <math.h>

void checkBulbStatus(int n) {
    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n)
        printf("yes\n");
    else
        printf("no\n");
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;  // Stop processing if input is 0
        checkBulbStatus(n);
    }
    return 0;
}
