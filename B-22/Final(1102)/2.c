/*
2. On planet Alpha, creatures called Blobs consume half of their available food supply daily. Given the initial amount of food (in kg), write an algorithm to determine the number of days before the supply reduces to 1 kg or less.

   **Input Format**  
   - First line: Integer **N** (number of test cases).  
   - Each of the next **N** lines contains a floating-point number **X** (initial food supply in kg).  

   **Output Format**  
   - Print the number of days followed by the word "days".

   **Sample Input | Sample Output**  
   **3** → **6 days**  
   **40.0** → **8 days**  
   **200.0** → **9 days**  

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
*/
#include <stdio.h>

int main() {
    int N;  // Number of test cases
    double X;  // Initial food quantity

    // Read the number of test cases
    scanf("%d", &N);

    // For each test case
    for (int i = 0; i < N; i++) {
        // Read the initial food quantity
        scanf("%lf", &X);

        int days = 0;
        // Keep halving the food until it's less than 1
        while (X >= 1) {
            X /= 2;  // Divide food by 2
            days++;  // Increment the day count
        }

        // Output the number of days
        printf("%d days\n", days);
    }

    return 0;
}

/*
Code Breakdown:
scanf("%d", &N);:

Read the number of test cases (N).

for (int i = 0; i < N; i++):

Loop through each test case.

scanf("%lf", &X);:

Read the initial food amount for each test case.

while (X >= 1):

Keep dividing X by 2 while it is greater than or equal to 1. This represents the Blob eating half its food every day.

X /= 2;:

Halve the food each day.

days++;:

Increment the day count each time the Blob eats.

printf("%d days\n", days);:

Output the number of days it took for the food to go below 1 kg.

Example:
Input:
2
10
2
Steps for each test case:
Test case 1 (X = 10):

Day 1: 10 / 2 = 5

Day 2: 5 / 2 = 2.5

Day 3: 2.5 / 2 = 1.25

Day 4: 1.25 / 2 = 0.625 (now less than 1)

Result: 4 days

Test case 2 (X = 2):

Day 1: 2 / 2 = 1

Day 2: 1 / 2 = 0.5 (now less than 1)

Result: 2 days

Output:
4 days
2 days
*/
