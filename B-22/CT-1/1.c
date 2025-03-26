1. C Program to Find Distance Between Two Points Using Structure
c
Copy
Edit
#include <stdio.h>
#include <math.h>

// Define a structure for a point
struct Point {
    float x, y;
};

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point p1, p2;

    // Taking input for the two points
    printf("Enter coordinates for Point-01 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates for Point-02 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    // Calculate and print the distance
    float distance = calculateDistance(p1, p2);
    printf("Distance = %.2f\n", distance);

    return 0;
}
Sample Input
mathematica
Copy
Edit
Enter coordinates for Point-01 (x y): 2 3
Enter coordinates for Point-02 (x y): 5 7
Sample Output
ini
Copy
Edit
Distance = 5.00

