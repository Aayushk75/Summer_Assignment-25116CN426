// Program to create a library management system
#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book library[50];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Book\n2. Display Books\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Title: ");
            scanf(" %[^\n]s", library[count].title);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Title: %s\n", library[i].id, library[i].title);
            }
        } else if (choice == 3) {
            exit(0);
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}