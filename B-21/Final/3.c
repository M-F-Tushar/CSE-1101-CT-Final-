/*
3. A particle has initial velocity and acceleration. If its velocity after a certain time is v, then what will its displacement be in twice that time? 

The input will contain two integers in each line. Each line makes one set of input. These two integers denote the value of v (100 <= v <= 100) and t (0 < t <= 200) (t means at the time the particle gains that velocity). 

For each line of input, print a single integer in one line denoting the displacement in double of that time.

Sample Input: 
0 0 5 12

Sample Output: 
0 120
    
Explanation:
Using kinematics, the displacement formula is:

𝑠=𝑣𝑡−1/2𝑎𝑡2
Where:
v is the velocity.
t is the given time.
a is acceleration, calculated as
a= v/t.
Displacement at 2t is calculated using the formula for displacement.
*/
#include <stdio.h>

int main() {
    int v, t;

    // Let's assume we want to process 3 pairs for this example
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &v, &t);

        if (t == 0) {
            printf("0\n");
        } else {
            double a = (double)v / t;
            double time = 2 * t;
            double displacement = (v * time) - (0.5 * a * time * time);
            printf("%d\n", (int)displacement);
        }
    }

    return 0;
}

