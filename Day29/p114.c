#include <stdio.h>

#define MAX 50

int main() {
    int arr[MAX], n = 0;
    int choice, i, pos, element, found;

    printf("ARRAY OPERATIONS SYSTEM");

    do {
        printf("\nARRAY MENU:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Search Element\n");
        printf("5. Sort Array in Ascending order\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (n >= MAX) {
                    printf("Array is full!\n");
                    break;
                }
                printf("Enter element to insert: ");
                scanf("%d", &element);

                arr[n] = element;
                n++;

                printf("Element inserted successfully.\n");
                break;

            case 2:
                if (n == 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                }
                else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty!\n");
                } 
                else{
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter element to search: ");
                scanf("%d", &element);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == element) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Element not found!\n");
                }
                break;

            case 5:
                if (n == 0) {
                    printf("Array is empty!\n");
                    break;
                }

                for (i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted in ascending order.\n");
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}