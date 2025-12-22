/*
 * Program: Find all Armstrong Numbers between 1 and 1000
 * Logic: An Armstrong number is a number where the sum of cubes 
 * of its digits is equal to the number itself (e.g., 153).
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int num, originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}