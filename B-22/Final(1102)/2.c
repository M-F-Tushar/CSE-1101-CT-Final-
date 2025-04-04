2. Calculate Days Until Food is Less Than 1 Kg
Explanation:
A creature called "Blob" eats half of its food supply every day. We need to find out how many days it takes for the food supply to go below 1 kg.

Steps:
Read the number of test cases (N).

For each test case:

Read the initial food quantity (X).

Start a counter (days = 0).

Keep dividing X by 2 each day until X < 1.

Count the number of days taken.

Print the result.

C Code:
c
Copy
Edit
#include <stdio.h>

void calculateDays(double food) {
    int days = 0;
    while (food > 1) {
        food /= 2;  // Blob eats half the food
        days++;
    }
    printf("%d days\n", days);
}

int main() {
    int N;
    double X;

    printf("Enter number of test cases: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Enter initial food quantity: ");
        scanf("%lf", &X);
        calculateDays(X);
    }

    return 0;
}

