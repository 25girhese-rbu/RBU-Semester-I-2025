/*
* Program: Calculate Gross Salary based on Basic Salary
* Author: Soniya Girhe
*College: Ramdeobaba University (RBU) 
*/

#include <stdio.h>

int main() { float basic, hra, da, gross;

printf("Enter Basic Salary of the employee: ");
scanf("%f", &basic);

if (basic <= 10000) {
    hra = basic * 0.20; // 20% HRA
    da = basic * 0.80;  // 80% DA
} else if (basic <= 20000) {
    hra = basic * 0.25; // 25% HRA
    da = basic * 0.90;  // 90% DA
} else {
    hra = basic * 0.30; // 30% HRA
    da = basic * 0.95;  // 95% DA
}

gross = basic + hra + da;

printf("\n--- Salary Breakdown ---");
printf("\nBasic Salary: %.2f", basic);
printf("\nHRA: %.2f", hra);
printf("\nDA: %.2f", da);
printf("\nGross Salary: %.2f\n", gross);

return 0;
}