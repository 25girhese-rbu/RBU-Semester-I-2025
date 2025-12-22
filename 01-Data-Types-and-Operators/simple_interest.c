/*
 * Program: Calculate Simple Interest
 * Formula: SI = (P * N * R) / 100
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    float principal, years, rate, si;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Number of years: ");
    scanf("%f", &years);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    // Calculation
    si = (principal * years * rate) / 100;

    printf("\nThe Simple Interest is: %.2f\n", si);

    return 0;
}
