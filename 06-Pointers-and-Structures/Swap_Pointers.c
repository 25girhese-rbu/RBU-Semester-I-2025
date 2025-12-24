#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // temp = value at address a
    *a = *b;     // value at address a = value at address b
    *b = temp;   // value at address b = temp
}

int main() {
    int x, y;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("Before Swapping: x = %d, y = %d\n", x, y);

    // Pass the addresses of x and y
    swap(&x, &y);

    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}