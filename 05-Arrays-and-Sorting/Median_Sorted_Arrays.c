/*
 * Program:Merge two sorted lists and find the middle value.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    int m, n, i, j, k;
    
    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter %d sorted elements for nums1: ", m);
    for(i = 0; i < m; i++) scanf("%d", &nums1[i]);

    printf("Enter size of second array (n): ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d sorted elements for nums2: ", n);
    for(i = 0; i < n; i++) scanf("%d", &nums2[i]);

    // Merging the two arrays into one sorted array
    int totalSize = m + n;
    int merged[totalSize];
    i = 0; j = 0; k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) merged[k++] = nums1[i++];
        else merged[k++] = nums2[j++];
    }
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    // Calculating Median
    float median;
    if (totalSize % 2 != 0) {
        median = merged[totalSize / 2];
    } else {
        median = (merged[(totalSize / 2) - 1] + merged[totalSize / 2]) / 2.0;
    }

    printf("The Median is: %.2f\n", median);

    return 0;
}
