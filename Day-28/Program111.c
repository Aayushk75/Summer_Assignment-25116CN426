// Program to create a ticket booking system
#include <stdio.h>
#include <stdlib.h>

int main() {
    int seats[5] = {0};
    int choice, seatNum;

    while (1) {
        printf("\n1. View Seats\n2. Book Seat\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 5; i++) {
                printf("Seat %d: %s\n", i + 1, seats[i] ? "Booked" : "Available");
            }
        } else if (choice == 2) {
            printf("Enter seat (1-5): ");
            scanf("%d", &seatNum);
            if (seatNum >= 1 && seatNum <= 5 && seats[seatNum - 1] == 0) {
                seats[seatNum - 1] = 1;
                printf("Booked successfully!\n");
            } else {
                printf("Seat unavailable or invalid!\n");
            }
        } else if (choice == 3) {
            exit(0);
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}