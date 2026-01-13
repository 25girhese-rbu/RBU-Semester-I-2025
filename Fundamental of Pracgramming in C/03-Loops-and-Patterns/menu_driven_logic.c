/*
 * Program: Menu-driven logic (Largest number, Factorial, Prime check)
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, n, i, fact, count, a, b, c, max;

    while(1) {
        printf("\n--- Module 3 Menu ---");
        printf("\n1. Find Largest among 3 (Ternary)");
        printf("\n2. Calculate Factorial");
        printf("\n3. Check Prime Number");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter 3 numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
                printf("Largest is: %d\n", max);
                break;
            case 2:
                printf("Enter number: ");
                scanf("%d", &n);
                fact = 1;
                for(i = 1; i <= n; i++) fact *= i;
                printf("Factorial: %d\n", fact);
                break;
            case 3:
                printf("Enter number: ");
                scanf("%d", &n);
                count = 0;
                for(i = 1; i <= n; i++) if(n % i == 0) count++;
                if(count == 2) printf("Prime Number\n");
                else printf("Not a Prime Number\n");
                break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}