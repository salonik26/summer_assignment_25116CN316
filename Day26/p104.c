#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\n1. Which symbol is used to end a statement in C?\n");
    printf("1) .\n2) ;\n3) :\n4) ,\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 2:
            score++;
            break;
    }

    printf("\n2. How many days are there in a week?\n");
    printf("1) 5\n2) 6\n3) 7\n4) 8\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 3:
            score++;
            break;
    }

    printf("\n3. Which is the largest planet?\n");
    printf("1) Earth\n2) Mars\n3) Jupiter\n4) Venus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 3:
            score++;
            break;
    }

    printf("\nYour Total Score = %d/3\n", score);

    if (score >= 2)
        printf("Congratulations! You Passed.\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}