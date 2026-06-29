// Program to create a menu-driven string operations system
#include <stdio.h>
#include <string.h>

int main() {
    char s[50], copy[50];
    int ch;
    printf("Enter string: "); scanf("%s", s);
    while(getchar() != '\n');
    while(1) {
        printf("\n1.Length 2.Copy 3.Exit\nChoice: ");
        scanf("%d", &ch);
        while(getchar() != '\n');
        if(ch == 3) break;
        if(ch == 1) printf("Len: %lu\n", strlen(s));
        else if(ch == 2) {
            strcpy(copy, s);
            printf("Copied: %s\n", copy);
        }
    }
    return 0;
}
