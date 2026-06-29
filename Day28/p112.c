#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[10];
    char email[50];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i, found;
    char search[50];

    do {
        printf("\nCONTACT MANAGEMENT SYSTEM\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Name: ");
                scanf(" %s", c[n].name);

                printf("Enter Phone: ");
                scanf(" %s", c[n].phone);

                printf("Enter Email: ");
                scanf(" %s", c[n].email);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                printf("\nCONTACT LIST\n");

                if (n == 0){
                    printf("No contacts available.\n");
                } 
                else {
                    for (i = 0; i < n; i++) {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        printf("Email: %s\n", c[i].email);
                    }
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf(" %s", &search);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, search) == 0) {
                        printf("\nContact Found!\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        printf("Email: %s\n", c[i].email);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Contact not found!\n");
                }
                break;

            case 4:
                printf("Exiting Contact System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}