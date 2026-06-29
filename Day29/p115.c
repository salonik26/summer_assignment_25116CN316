#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

int main() {
    char str[100], ch;
    int choice, i, count, found;

    printf("STRING OPERATIONS SYSTEM");

    do {
        printf("\nSTRING MENU\n");
        printf("1. Input String\n");
        printf("2. Length of String\n");
        printf("3. Reverse String\n");
        printf("4. Uppercase\n");
        printf("5. Lowercase\n");
        printf("6. Count Vowels\n");
        printf("7. Check Palindrome\n");
        printf("8. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice){

            case 1:
            printf("Enter string: ");
            fgets(str,sizeof(str),stdin);
            printf("String stored.\n");
            break;
            
            case 2:
            printf("Length = %lu\n", strlen(str));
            break;
            
            case 3:
            printf("Reversed string: ");
            for (i = strlen(str) - 1; i >= 0; i--){
                printf("%c", str[i]);
            }
            printf("\n");
            break;
            
            case 4:
            printf("Uppercase: ");
            for (i = 0; str[i] != '\0'; i++){
                printf("%c", toupper(str[i]));
            }
            printf("\n");
            break;
            
            case 5:
            printf("Lowercase: ");
            for (i = 0; str[i] != '\0'; i++) {
                printf("%c", tolower(str[i]));
            }
            printf("\n");
            break;
            
            case 6:
            count = 0;
            for (i = 0; str[i] != '\0'; i++) {
                char c = tolower(str[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    count++;
                }
            }
            printf("Vowels = %d\n", count);
            break;
            
            case 7:
            found = 1;
            for (i = 0; i < strlen(str) / 2; i++){
                if (tolower(str[i]) != tolower(str[strlen(str) - i - 1])) {
                    found = 0;
                    break;
                }
            }
            if(found){
                printf("Palindrome\n");
            }
            else{
                printf("Not Palindrome\n");
            }
            break;
            
            case 8:
            printf("Exiting program...\n");
            break;
            
            default:
            printf("Invalid choice!\n");
        }

    } while (choice != 8);

    return 0;
}