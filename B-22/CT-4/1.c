✅ Problem 1: Calculate Distance Between Two Points
➤ Problem Description:
Write a program to find the distance between two points using structure. Values are taken from the user.

Sample Input:
makefile
Copy
Edit
Point-01: x = 2, y = 3
Point-02: x = 5, y = 7
Sample Output:
ini
Copy
Edit
Distance = 5.00
✅ Step-by-Step Solution:
Create a structure Point with two variables x and y.

Read two points from the user.

Use the distance formula:

Distance
=
(
𝑥
2
−
𝑥
1
)
2
+
(
𝑦
2
−
𝑦
1
)
2
Distance=
(x
2
​
 −x
1
​
 )
2
 +(y
2
​
 −y
1
​
 )
2

​

Print the distance with 2 decimal places.

✅ Code:
c
Copy
Edit
#include <stdio.h>
#include <math.h>

// Define a structure for a point
struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1, p2;
    float distance;

    // Taking user input
    printf("Enter x and y for Point 1: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter x and y for Point 2: ");
    scanf("%d %d", &p2.x, &p2.y);

    // Calculate distance
    distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));

    // Print distance
    printf("Distance = %.2f\n", distance);

    return 0;
}
