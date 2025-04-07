1. C Program to Find Distance Between Two Points Using Structure
#include <stdio.h>
#include <math.h>

// Define structure for a Point
struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float distance;

    // Take input for first point
    printf("Enter coordinates for Point-01 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    // Take input for second point
    printf("Enter coordinates for Point-02 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    // Calculate distance
    distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));

    // Print the result
    printf("Distance = %.2f\n", distance);

    return 0;
}
🧱 STEP 1: Structure Definition
struct Point {
    float x;
    float y;
};
This defines a structure named Point that stores the x and y coordinates of a point.

So now, we can create variables of type struct Point to represent points.

🧱 STEP 2: Variable Declaration
struct Point p1, p2;
float distance;
p1 and p2 are two variables of type Point.

distance will store the result of the calculation.

🧱 STEP 3: Input from User
scanf("%f %f", &p1.x, &p1.y);
👤 Let's say user inputs:

2 3
✅ Then:

p1.x = 2

p1.y = 3

Now:

scanf("%f %f", &p2.x, &p2.y);
👤 User inputs:
5 7
✅ Then:

p2.x = 5

p2.y = 7

🧠 STEP 4: Distance Calculation
distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
Let’s plug in the values:
p2.x - p1.x = 5 - 2 = 3

(p2.x - p1.x)^2 = 3^2 = 9

p2.y - p1.y = 7 - 3 = 4

(p2.y - p1.y)^2 = 4^2 = 16

So:

distance = sqrt(9 + 16) = sqrt(25) = 5.0
🖨️ STEP 5: Output

printf("Distance = %.2f\n", distance);
✔️ Output:

Distance = 5.00

