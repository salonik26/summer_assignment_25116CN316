#include <stdio.h>

int main() {
    int id[100], qty[100];
    float price[100];
    char name[100][50];

    int n = 0, choice, i, searchId, found;

    printf("INVENTORY MANAGEMENT SYSTEM\n");

    do {
        printf("\nINVENTORY MENU:\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
            printf("Enter Item ID: ");
            scanf("%d", &id[n]);

            printf("Enter Item Name: ");
            scanf("%s", &name[n]);

            printf("Enter Quantity: ");
            scanf("%d", &qty[n]);

            printf("Enter Price: ");
            scanf("%f", &price[n]);

            n++;
            printf("Item added successfully!\n");
            break;
            
            case 2:
            printf("\nID\tName\tQty\tPrice\n");
            for (i = 0; i < n; i++){
                printf("%d\t%s\t%d\t%.2f\n",id[i], name[i], qty[i], price[i]);
            }
            break;
            
            case 3:
            printf("Enter Item ID to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    printf("Item Found!\n");
                    printf("Name: %s\n", name[i]);
                    printf("Quantity: %d\n", qty[i]);
                    printf("Price: %.2f\n", price[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Item not found.\n");
            break;
            
            case 4:
            printf("Enter Item ID to update: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < n; i++) {
                if (id[i] == searchId) {
                    printf("Enter new quantity: ");
                    scanf("%d", &qty[i]);
                    printf("Quantity updated!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Item not found.\n");
            break;
            
            case 5:
            printf("Exiting program...\n");
            break;
            
            default:
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}