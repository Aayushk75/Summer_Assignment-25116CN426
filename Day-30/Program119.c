// Program to create a mini employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[2];
    for(int i = 0; i < 2; i++) {
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }
    for(int i = 0; i < 2; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}