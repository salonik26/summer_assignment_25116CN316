#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Employee Management System\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of employee: %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf(" %s", &e[i].name);

        printf("Department: ");
        scanf(" %s", &e[i].department);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               e[i].id, e[i].name, e[i].department, e[i].salary);
    }

    return 0;
}