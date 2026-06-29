#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount;

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Balance Enquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("Deposit Successful.\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance = balance - amount;
                    printf("Please collect your cash.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice!= 4);

    return 0;
}