// Program to find the first repeating character
#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (visited[ch] == 1) {
            printf("First repeating character is: %c\n", str[i]);
            return 0;
        }
        visited[ch] = 1;
    }

    printf("No repeating character found.\n");
    return 0;
}