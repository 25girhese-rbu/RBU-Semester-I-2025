/*
 * Program: Check if character is Digit, Symbol, or Alphabet
 * Also performs Uppercase/Lowercase conversion.
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is an Alphabet.\n", ch);
        
        // Conversion logic
        if (ch >= 'A' && ch <= 'Z') {
            printf("Lowercase version: %c\n", ch + 32);
        } else {
            printf("Uppercase version: %c\n", ch - 32);
        }
    } else {
        printf("The character '%c' is a Special Symbol.\n", ch);
    }

    return 0;
}