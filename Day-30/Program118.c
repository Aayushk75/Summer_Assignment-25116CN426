// Program to create a mini library system
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
};

int main() {
    struct Book b[2];
    for(int i = 0; i < 2; i++) {
        scanf("%s %s", b[i].title, b[i].author);
    }
    for(int i = 0; i < 2; i++) {
        printf("%s by %s\n", b[i].title, b[i].author);
    }
    return 0;
}