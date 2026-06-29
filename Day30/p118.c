#include <stdio.h>
#include <string.h>


int main() {
    int bookId[50];
    char title[100][50];
    char author[100][50];
    int copies[50];

    int n, i, choice;
    char searchTitle[50];
    int found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Title: ");
        scanf("%s", &title[i]);

        printf("Author: ");
        scanf("%s", &author[i]);

        printf("Number of Copies: ");
        scanf("%d", &copies[i]);
    }

    do {
        printf("\nMINI LIBRARY SYSTEM\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by Title\n");
        printf("3. Search Book by Author\n");
        printf("4. Exit\n");


        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nBook List\n");
                for(i = 0; i < n; i++) {
                    printf("\nBook ID : %d", bookId[i]);
                    printf("\nTitle   : %s", title[i]);
                    printf("\nAuthor  : %s", author[i]);
                    printf("\nCopies  : %d\n", copies[i]);
                }
                break;

            case 2:
                printf("Enter book title to search: ");
                scanf("%s", &searchTitle);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(title[i], searchTitle) == 0) {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        printf("Copies  : %d\n", copies[i]);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Book not found!\n");
                }
                break;

            case 3:
                printf("Enter Author name: ");
                scanf(" %s", &searchTitle);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(author[i], searchTitle) == 0) {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        printf("Copies  : %d\n", copies[i]);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Book not found!\n");
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