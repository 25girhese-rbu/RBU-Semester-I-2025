/*
 * Program: Printing Number and Star Pyramids
 * Logic: Using nested 'for' loops to control rows, spaces, and columns.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int i, j, space, rows = 5, k = 0;

    // --- 1. Number Pyramid Pattern ---
    printf("Number Pyramid:\n");
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n--- --- ---\n\n");

    // --- 2. Star (Diamond) Pyramid Pattern ---
    printf("Star Pyramid:\n");
    for (i = 1; i <= rows; i++, k = 0) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}