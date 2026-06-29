#include <stdio.h>
#include <string.h>


struct Employee {
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i, choice;
    char searchName[50];
    int found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Name: ");
        scanf(" %s", &emp[i].name);

        printf("Department: ");
        scanf(" %s", &emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do {
        printf("\nEMPLOYEE MANAGEMENT SYSTEM\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by Name\n");
        printf("3. Search Employee by Department\n");
        printf("4. Exit\n");


        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEmployee List\n");
                for(i = 0; i < n; i++) {
                    printf("\nEmployee ID : %d", emp[i].empId);
                    printf("\nName        : %s", emp[i].name);
                    printf("\nDepartment  : %s", emp[i].department);
                    printf("\nSalary      : %.2f\n", emp[i].salary);
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf(" %s", &searchName);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(emp[i].name, searchName) == 0) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Employee not found!\n");
                }
                break;

                case 3:
                printf("Enter department to search: ");
                scanf(" %s", &searchName);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(emp[i].department, searchName) == 0) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Employee not found!\n");
                }
                break;



            case 4:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}