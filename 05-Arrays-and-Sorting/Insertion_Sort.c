/*
 * Program:Sorting Array Using Insertion Sort.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int arr[10], n, i, j, key;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort Logic
    for (i = 1; i < n; i++) {
        key = arr[i]; // The element to be inserted
        j = i - 1;

        /* Move elements of arr[0..i-1] that are 
           greater than key, to one position ahead 
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
