// Program for an ATM simulation
#include <stdio.h>

int main() {
    float balance = 1000.0;
    int choice;
    float amount;

    while (1) {
        printf("\n1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposited.\n");
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn.\n");
                } else {
                    printf("Insufficient funds.\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}