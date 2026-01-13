/*
 * Program: Check if an integer is divisible by two chosen numbers
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int num, d1, d2;

    printf("Enter the integer to check: ");
    scanf("%d", &num);

    printf("Enter two numbers (between 2 and 9) to check divisibility by: ");
    scanf("%d %d", &d1, &d2);

    if (num % d1 == 0 && num % d2 == 0) {
        printf("%d is divisible by both %d and %d.\n", num, d1, d2);
    } else {
        printf("%d is not divisible by both %d and %d.\n", num, d1, d2);
    }

    return 0;
}