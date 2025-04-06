/*
4. Given two **n x n** matrices, check if their sum results in an **Identity Matrix**.

   **Input Format**  
   - Two n x n matrices.  

   **Output Format**  
   - Print `"Identity Matrix"` if the sum results in an identity matrix, otherwise print `"Not Identity Matrix"`.

   **Sample Input |                                 Sample Output**  
   **{{1, 2, -3}, {0, -5, 0}, {-1, 4, 0}}**  
   **{{0, -2, 3}, {0, 6, 0}, {1, -4, 1}}** →     `"Identity Matrix"`  
   **{{1, 2, 3}, {0, -5, 0}, {-1, 4, 0}}**  
   **{{0, 2, 3}, {0, 6, 0}, {1, -4, 1}}** → `    "Not Identity Matrix"`  

4. Check If the Sum of Two Matrices is an Identity Matrix
Explanation:
An identity matrix is an n × n matrix where:

The diagonal elements are 1.

All other elements are 0.

We need to:

Read two n × n matrices.

Compute their sum.

Check if the sum is an identity matrix.

Print "Identity Matrix" if true, otherwise "Not Identity Matrix".

Steps:
Read n × n matrices A and B.

Add A[i][j] + B[i][j] to form matrix C.

Check if:

C[i][i] == 1 for diagonal elements.

C[i][j] == 0 for non-diagonal elements.

Print result.
*/
#include <stdio.h>

int main() {
    int n = 3;  // Matrix size (3x3 for this example)
    
    // Matrix A
    int A[3][3] = {
        {1, 2, -3},
        {0, -5, 0},
        {-1, 4, 0}
    };
    
    // Matrix B
    int B[3][3] = {
        {0, -2, 3},
        {0, 6, 0},
        {1, -4, 1}
    };
    
    // Resulting matrix C (A + B)
    int C[3][3];

    // Step 1: Compute the sum of A and B and store in C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Step 2: Check if the resulting matrix C is an identity matrix
    int isIdentity = 1;  // Assume it's an identity matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // If it's on the diagonal (i == j), it should be 1
            if (i == j && C[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            // If it's off the diagonal (i != j), it should be 0
            if (i != j && C[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity) break;  // If already not identity, no need to check further
    }

    // Step 3: Output the result
    if (isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not Identity Matrix\n");
    }

    return 0;
}
