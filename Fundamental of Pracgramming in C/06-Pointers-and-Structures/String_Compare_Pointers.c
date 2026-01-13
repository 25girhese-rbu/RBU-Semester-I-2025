/*
 * Program: String Compareing using Pointers.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */
#include <stdio.h>

int main() {
    char str1[50], str2[50];
    char *p1, *p2;
    int flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    p1 = str1; // Point to start of first string
    p2 = str2; // Point to start of second string

    // Compare characters until we reach the end of either string
    while (*p1 != '\0' || *p2 != '\0') {
        if (*p1 != *p2) {
            flag = 1;
            break;
        }
        p1++;
        p2++;
    }

    if (flag == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}