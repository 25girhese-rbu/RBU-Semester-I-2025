/*
 * Program: Swap two numbers (With and Without 3rd variable)
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping: a = %d, b = %d", a, b);

    // Method 1: Using third variable
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping (using temp): a = %d, b = %d", a, b);

    // Resetting for Method 2
    temp = a; a = b; b = temp; 

    // Method 2: Without third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swapping (without temp): a = %d, b = %d\n", a, b);

    return 0;
}
