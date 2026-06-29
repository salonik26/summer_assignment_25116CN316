#include <stdio.h>

int main() {
    int id[50], issued[50] = {0};
    char title[50][30];
    int n, choice, i, search;

    printf("Library Management System\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Book %d ID: ", i + 1);
        scanf("%d", &id[i]);

        printf("Enter Title: ");
        scanf(" %s", &title[i]);
    }

    do {
        printf("\nMENU\n");
        printf("1. Display Books\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nID\tTitle\t\tStatus\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\n",
                           id[i], title[i],
                           issued[i] ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID to issue: ");
                scanf("%d", &search);

                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        if (issued[i] == 0) {
                            issued[i] = 1;
                            printf("Book Issued Successfully.\n");
                        } else {
                            printf("Book already issued.\n");
                        }
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to return: ");
                scanf("%d", &search);

                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        if (issued[i] == 1) {
                            issued[i] = 0;
                            printf("Book Returned Successfully.\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                    }
                }
                break;

            case 4:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}