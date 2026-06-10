//Program to Convert decimal to binary
#include <stdio.h>
int main() {
int num;
printf("Enter a decimal number: ");
scanf("%d", &num);
printf("Binary of the number is: ");
for (; num > 0; num = num / 2) {
printf("%d", num % 2);
}
    return 0;
}