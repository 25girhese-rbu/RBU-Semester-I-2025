/*
 * Program:Sum of 1/1!+2/2!+3/3!....N/N! Series using User Define Function.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

// User-defined function to calculate factorial
// 'double' is used to handle large numbers like 10!
double findFact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int N;
    float sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop through each term from 1 to N
    for (int i = 1; i <= N; i++) {
        // (float) converts 'i' so the division gives a decimal result
        sum = sum + (float)i / findFact(i);
    }

    printf("Total sum of the series is: %.4f\n", sum);

    return 0;
}
