
#include<conio.h>
#include <stdio.h>
int main() {
    float balance, amount;
    int choice;

    printf("Enter your current balance ");
    scanf("%f", &balance);

    printf("\n 1. Balance Inquiry");
    printf("\n 2. Cash Withdrawal");
    printf("\n 3. Cash Deposit");

    printf("\nEnter your choice  ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Current balancen - %.3f", balance);
            break;

        case 2:
            printf("Enter withdrawal amount ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0) {
                balance = balance - amount;
                printf("Transaction successful");
                printf("\nRemaining balance - %.3f", balance);
            } else {
                printf("Insufficient balance");
            }
            break;

        case 3:
            printf("Enter deposit amount ");
            scanf("%f", &amount);

            if (amount > 0) {
                balance = balance + amount;
                printf("Deposit successful");
                printf("\n Updated balance- %.3f", balance);
            } else {
                printf("Invalid deposit amount");
            }
            break;

        default:
            printf("Invalid option");
    }

    return 0;
     
    }