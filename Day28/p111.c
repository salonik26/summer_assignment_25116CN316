#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    float pricePerSeat;
    float total;
};

int main() {
    struct Ticket t;
    int choice;

    printf("Ticket Booking System\n");


    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Customer Name: ");
    scanf(" %s", &t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("Enter Price per Seat: ");
    scanf("%f", &t.pricePerSeat);

    t.total = t.seats * t.pricePerSeat;

    do {
        printf("\nMENU\n");
        printf("1. Show Ticket Details\n");
        printf("2. Update Seats\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nTicket Details:\n");
                printf("Ticket No : %d\n", t.ticketNo);
                printf("Name      : %s\n", t.name);
                printf("Seats     : %d\n", t.seats);
                printf("Price/Seat: %.2f\n", t.pricePerSeat);
                printf("Total Amt : %.2f\n", t.total);
                break;

            case 2:
                printf("Enter new number of seats: ");
                scanf("%d", &t.seats);

                t.total = t.seats * t.pricePerSeat;
                printf("Seats updated successfully!\n");
                break;

            case 3:
                printf("Thank you for booking!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}