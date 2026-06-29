#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age entered.\n");
    }
    else if (age >= 18) {
        printf("Eligible for voting.\n");
    }
    else {
        printf("Not eligible for voting.\n");
    }

    return 0;
}