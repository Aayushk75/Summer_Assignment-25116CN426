//Program to reverse a string
#include <stdio.h>

int main() {
    char str[100], temp;
    int len = 0, i = 0, j;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
