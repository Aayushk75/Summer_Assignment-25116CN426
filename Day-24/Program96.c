// Program to remove duplicate characters from a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0};
    int index = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char val = str[i];
        if (seen[val] == 0) {
            seen[val] = 1;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';

    printf("Result: %s\n", str);
    return 0;
}