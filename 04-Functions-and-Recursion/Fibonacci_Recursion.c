#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        // Calling the recursive function for each term
        printf("%d ", fib(i));
    }

    return 0;
}
