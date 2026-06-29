#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amount;

    printf("Bank Account System\n");

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %s", &a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    do {
        printf("\nMENU\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nAccount Details:\n");
                printf("Account No : %d\n", a.accNo);
                printf("Name       : %s\n", a.name);
                printf("Balance    : %.2f\n", a.balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                a.balance += amount;
                printf("Deposit Successful!\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= a.balance) {
                    a.balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using Bank System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}