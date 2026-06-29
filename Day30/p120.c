#include <stdio.h>
#include <string.h>


struct Hotel
{
    int roomNo;
    char name[30];
    char phone[15];
    int days;
    float rentperday;

};

struct Hotel h[50];
int count = 0;

void addCustomer()
{
    printf("Enter Room Number: ");
    scanf("%d", &h[count].roomNo);

    printf("Enter Customer Name: ");
    scanf(" %s", h[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", h[count].phone);

    printf("Enter Number of Days: ");
    scanf("%d", &h[count].days);

    printf("Enter rent per day:");
    scanf("%f",&h[count].rentperday);

    count++;
    printf("\nCustomer Added Successfully!\n");
}


void displayCustomer()
{
    int i;

    if (count == 0){
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nCustomer Details:\n");

    for (i = 0; i < count; i++){
        printf("\nRoom No      : %d", h[i].roomNo);
        printf("\nName         : %s", h[i].name);
        printf("\nPhone        : %s", h[i].phone);
        printf("\nDays         : %d", h[i].days);
        printf("\nRent/Day     : %.2f", h[i].rentperday);
        printf("\nTotal bill   : %.2f\n", h[i].days * h[i].rentperday);
    }
}


void searchCustomer()
{
    int room, i, found = 0;

    printf("Enter Room Number to Search: ");
    scanf("%d", &room);

    for (i = 0; i < count; i++){
        if(h[i].roomNo == room){
            printf("\nRecord Found\n");
            printf("Room No      : %d\n", h[i].roomNo);
            printf("Name         : %s\n", h[i].name);
            printf("Phone        : %s\n", h[i].phone);
            printf("Days         : %d\n", h[i].days);
            printf("\nRent/Day   : %.2f", h[i].rentperday);
            printf("\nTotal bill : %.2f\n", h[i].days * h[i].rentperday);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record Not Found!\n");
}


void deleteCustomer(){
    int room, i, j, found = 0;

    printf("Enter Room Number to Delete: ");
    scanf("%d", &room);

    for (i = 0; i < count; i++){
        if(h[i].roomNo == room){
            found = 1;
            for (j = i; j < count - 1; j++){
                h[j] = h[j + 1];
            }

            count--;
            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Record Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\nHOTEL MANAGEMENT SYSTEM\n");
        printf("1. Add Customer\n");
        printf("2. Display Customers\n");
        printf("3. Search Customer\n");
        printf("4. Delete Customer\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            addCustomer();
            break;
            
            case 2:
            displayCustomer();
            break;
            
            case 3:
            searchCustomer();
            break;
            
            case 4:
            deleteCustomer();
            break;
            
            case 5:
            printf("Thank You!");
            break;
            
            default:
            printf("Invalid Choice!");
        }

    } while (choice != 5);

    return 0;
}