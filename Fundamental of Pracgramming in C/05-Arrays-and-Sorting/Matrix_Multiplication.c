/*
 * Program:Multiplication of two Matrices.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], res[2][2], i, j, k;

    // Input for Matrix A
    printf("Enter elements of 1st 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter elements of 2nd 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initializing result matrix with 0 and multiplying
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (k = 0; k < 2; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    printf("\nResultant Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
