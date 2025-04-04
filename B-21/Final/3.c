3. Compute Displacement at Double the Given Time
Explanation:
Using kinematics, the displacement formula is:

𝑠=𝑣𝑡−1/2𝑎𝑡2
Where:
v is the velocity.
t is the given time.
a is acceleration, calculated as
a= v/t.
Displacement at 2t is calculated using the formula for displacement.

#include <stdio.h>

void calculateDisplacement(int v, int t) {
    int a = v / t;  // Acceleration
    int displacement = (v * 2 * t) - (0.5 * a * (2 * t) * (2 * t));
    printf("%d\n", displacement);
}

int main() {
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF) {
        printf("Displacement: ");
        calculateDisplacement(v, t);
    }
    return 0;
}
