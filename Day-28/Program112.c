// Program to create contact management system
#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact directory[50];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Contact\n2. Display All\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf(" %[^\n]s", directory[count].name);
            printf("Enter Phone: ");
            scanf("%s", directory[count].phone);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("%s : %s\n", directory[i].name, directory[i].phone);
            }
        } else if (choice == 3) {
            exit(0);
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}