/*
 * Program: Calculate Area and Circumference of a Circle
 * Author: Soniya Girhe
 * College: Ramdeobaba University (RBU)
 * Course: Fundamentals of Programming Lab [24CS01TP0101]
 * Date: December 2025
 */

#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    // Taking input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Formula implementation
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Radius: %.2f\n", radius);
    printf("Area of Circle: %.2f\n", area);
    printf("Circumference of Circle: %.2f\n", circumference);

    return 0;
}
