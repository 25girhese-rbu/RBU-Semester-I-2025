/*
 * Program: Calculate Student Percentage
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 */

#include <stdio.h>

int main() {
    char section;
    int roll_no;
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter Section (A/B/C): ");
    scanf(" %c", &section); // Note the space before %c to catch the newline

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter marks of 5 subjects (out of 100): \n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    printf("\n--- Student Report ---");
    printf("\nSection: %c", section);
    printf("\nRoll No: %d", roll_no);
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%", percentage);

    return 0;
}
