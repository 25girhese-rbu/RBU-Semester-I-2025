/*
 * Program: The sum of array elements using pointers.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */
#include <stdio.h>

int main() {
    int arr[10], n, i, sum = 0;
    int *ptr; // Pointer variable

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Point ptr to the base address of the array
    ptr = arr; 

    for (i = 0; i < n; i++) {
        // *(ptr + i) accesses the value at the i-th position
        sum = sum + *(ptr + i);
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}