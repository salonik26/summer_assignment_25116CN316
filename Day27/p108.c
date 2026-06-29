#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[10];
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    printf("Marksheet Generation System\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %s", &s.name);

    printf("\nEnter marks of 5 subjects (out of 100):\n");
    s.total = 0;

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = (s.total / 5.0);

    printf("\nMARKSHEET\n");
    printf("Roll No   : %d\n", s.rollNo);
    printf("Name      : %s\n", s.name);

    printf("\nSubject Marks:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d : %d\n", i + 1, s.marks[i]);
    }

    printf("\nTotal Marks   : %d / 500\n", s.total);
    printf("Percentage    : %.2f%%\n", s.percentage);

    if(s.percentage >= 90){
        printf("Grade        : A+\n");
    }
    else if(s.percentage >= 75){
        printf("Grade        : A\n");
    }
    else if(s.percentage >= 60){
        printf("Grade        : B\n");
    }
    else if(s.percentage >= 40){
        printf("Grade        : C\n");
    }
    else{
        printf("Grade        : Fail\n");
    }

    return 0;
}