
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

C Code:
c
Copy
Edit
#include <stdio.h>

void checkIdentityMatrix(int n, int A[][n], int B[][n]) {
    int C[n][n];

    // Compute sum of A and B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Check if C is an identity matrix
    int isIdentity = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && C[i][j] != 1) || (i != j && C[i][j] != 0)) {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity)
        printf("Identity Matrix\n");
    else
        printf("Not Identity Matrix\n");
}

int main() {
    int n = 3;
    int A[3][3] = {{1, 2, -3}, {0, -5, 0}, {-1, 4, 0}};
    int B[3][3] = {{0, -2, 3}, {0, 6, 0}, {1, -4, 1}};

    checkIdentityMatrix(n, A, B);
    return 0;
}
