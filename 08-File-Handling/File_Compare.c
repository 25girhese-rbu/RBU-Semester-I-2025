/*
 * Program: omparing files to check if they are identical or different.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

 #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    char ch1, ch2;
    char fname1[20], fname2[20];
    int flag = 1;

    printf("Enter name of first file (e.g., file1.txt): ");
    scanf("%s", fname1);
    printf("Enter name of second file (e.g., file2.txt): ");
    scanf("%s", fname2);

    f1 = fopen(fname1, "r");
    f2 = fopen(fname2, "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error: Could not open files. Make sure they exist!\n");
        exit(1);
    }

    // Compare characters until end of file
    ch1 = getc(f1);
    ch2 = getc(f2);

    while (ch1 != EOF && ch2 != EOF) {
        if (ch1 != ch2) {
            flag = 0;
            break;
        }
        ch1 = getc(f1);
        ch2 = getc(f2);
    }

    // Check if one file is longer than the other
    if (flag == 1 && ch1 == EOF && ch2 == EOF)
        printf("\nResult: Files are identical.\n");
    else
        printf("\nResult: Files are different.\n");

    fclose(f1);
    fclose(f2);

    return 0;
}