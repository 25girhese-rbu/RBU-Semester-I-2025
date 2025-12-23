/*
 * Program:Binary Search in C.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int arr[10], n, i, key, low, high, mid, found = 0;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    // Note: For Binary Search, you MUST enter numbers in sorted order (e.g., 10, 20, 30...)
    printf("Enter %d elements in SORTED order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Look in the right half
        }
        else {
            high = mid - 1; // Look in the left half
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}
