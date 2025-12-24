#include <stdio.h>

struct Employee {
    char email[50];
    char name[50];
    char address[100];
    float salary;
};

int main() {
    struct Employee emp[10];
    int i, count = 0;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Email: ");
        scanf("%s", emp[i].email);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Address: ");
        scanf(" %[^\n]s", emp[i].address); // Reads string with spaces
        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        if(emp[i].salary > 50000) {
            count++;
        }
    }

    printf("\n--- Result ---\n");
    printf("Number of employees with salary > 50,000: %d\n", count);

    return 0;
}