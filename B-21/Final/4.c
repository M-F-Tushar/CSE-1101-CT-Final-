/*
4. There is a man named Rinku for switching on-off light in our University. He switches on-off the lights in a corridor. Every bulb has its own toggle switch.
That is, if it is pressed then the bulb turns on, and another press will turn it off. To save power consumption (or maybe he is mad or something else) he does a 
peculiar thing. If in a corridor there are n bulbs, he walks along the corridor back and forth n times and in i-th walk he toggles only the switches whose serial is
divisible by i. He does not press any switch when coming back to his initial position. An i-th walk is defined as going down the corridor (while doing the peculiar 
thing) and coming back again. Now you have to determine what is the final condition of the last bulb, Is it on or off? The input will be an integer indicating the
n-th bulb in a corridor Which is less than or equal to 2^32 - 1. A zero indicates the end of input. You should not process this input. Output 'yes' if the light is 
on otherwise 'no', in a single line.

Sample Input:
3 6241 8191 0

Sample Output:
no yes no
Explanation:
Each bulb in a corridor starts off. Rinku toggles the switches based on their divisibility by step count.

If a bulb's position is toggled an odd number of times, it remains on.

If toggled an even number of times, it remains off.

A bulb at position n will be on only if n is a perfect square (since perfect squares have an odd number of divisors).

Steps:

Read an integer n.

Check if n is a perfect square.

If it is, print "yes", else print "no".
*/
#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
void checkBulbStatus(int n) {
    int sqrt_n = sqrt(n);  // Calculate the square root of n
    if (sqrt_n * sqrt_n == n)  // Check if squaring the square root gives back n
        printf("yes\n");  // The bulb is ON if n is a perfect square
    else
        printf("no\n");   // The bulb is OFF if n is not a perfect square
}

int main() {
    int n;
    // Continuously read input until encountering 0
    while (1) {
        scanf("%d", &n);  // Read an integer
        if (n == 0) break;  // Stop processing if input is 0
        checkBulbStatus(n);  // Check if the bulb at position n is ON or OFF
    }
    return 0;  // Exit the program
}
/*
Example Input:
3 6241 8191 0
Step-by-Step Execution:
First Input: 3
Step 1: Read n = 3.

Step 2: Call checkBulbStatus(3).

Calculate the square root of 3:

3
≈
1.732
3
​
 ≈1.732
Square the integer part of the square root (1):

1
×
1
=
1
1×1=1
Since 1 ≠ 3, 3 is not a perfect square.

Output: no.

Second Input: 6241
Step 1: Read n = 6241.

Step 2: Call checkBulbStatus(6241).

Calculate the square root of 6241:

6241
=
79
6241
​
 =79
Square the result:

79
×
79
=
6241
79×79=6241
Since 6241 = 6241, 6241 is a perfect square.

Output: yes.

Third Input: 8191
Step 1: Read n = 8191.

Step 2: Call checkBulbStatus(8191).

Calculate the square root of 8191:

8191
≈
90.44
8191
​
 ≈90.44
Square the integer part of the square root (90):

90
×
90
=
8100
90×90=8100
Since 8100 ≠ 8191, 8191 is not a perfect square.

Output: no.

Input 0:
The program encounters 0, which signals the end of input.

The loop breaks, and the program terminates.

Final Output:
no
yes
no
Explanation of Outputs:
First Input 3: Not a perfect square → Output no.

Second Input 6241: It is a perfect square (79^2 = 6241) → Output yes.

Third Input 8191: Not a perfect square → Output no.
*/
