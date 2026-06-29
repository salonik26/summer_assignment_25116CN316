#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Student Record Management System\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", &s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Records\n");
    printf("Roll No.\tName\t\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}