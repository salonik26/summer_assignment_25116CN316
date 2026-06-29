#include <stdio.h>
#include <string.h>


struct Student {
    int admno;
    char name[50];
    char course[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice;
    char searchName[50];
    int found;

    printf("Enter number of students: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Admission No: ");
        scanf("%d", &s[i].admno);

        printf("Name: ");
        scanf(" %s", s[i].name); 

        printf("Course: ");
        scanf(" %s", s[i].course);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do {
        printf("\nSTUDENT RECORD SYSTEM\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Name\n");
        printf("3. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nStudent Records\n");

                for(i = 0; i < n; i++) {
                    printf("\nAdmission No: %d", s[i].admno);
                    printf("\nName   : %s", s[i].name);
                    printf("\nCourse : %s", s[i].course);
                    printf("\nMarks  : %.2f\n", s[i].marks);
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf(" %s", &searchName);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(s[i].name, searchName) == 0) {
                        printf("\nStudent Found!\n");
                        printf("Admission No: %d\n", s[i].admno);
                        printf("Name   : %s\n", s[i].name);
                        printf("Course : %s\n", s[i].course);
                        printf("Marks  : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Student not found!\n");
                }
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}