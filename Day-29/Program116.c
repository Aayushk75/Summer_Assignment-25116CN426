// Program  to create inventory management system
#include <stdio.h>

struct Item { int id; int qty; };

int main() {
    struct Item inv = {101, 50};
    int id;
    printf("Enter ID: "); scanf("%d", &id);
    if(id == inv.id) printf("Quantity: %d", inv.qty);
    else printf("Not found");
    return 0;
}