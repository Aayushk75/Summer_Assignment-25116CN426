//Program to Convert binary to decimal
#include <stdio.h>
int main() {
int binary, decimal = 0;
printf("Enter a binary number: ");
scanf("%d", &binary);
for (int mult = 1; binary > 0; mult = mult * 2, binary = binary / 10) {
if (binary % 10 == 1) {
decimal = decimal + mult;
}
}
printf("Decimal value: %d", decimal);
return 0;
}