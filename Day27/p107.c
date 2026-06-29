#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra, da, grossSalary;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Salary Management System\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of employee: %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf(" %s", &e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basicSalary);

        e[i].hra = e[i].basicSalary * 0.20;  
        e[i].da  = e[i].basicSalary * 0.10; 


        e[i].grossSalary = e[i].basicSalary + e[i].hra + e[i].da;
    }

    printf("\nSalary Details:\n");
    
    printf("ID\tName\t\tBasic\tHRA\tDA\tGross Salary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\n",
               e[i].id, e[i].name, e[i].basicSalary,
               e[i].hra, e[i].da, e[i].grossSalary);
    }

    return 0;
}