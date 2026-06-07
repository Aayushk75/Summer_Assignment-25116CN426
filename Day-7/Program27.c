//Program to find sum of digits using recursion
#include <stdio.h>
int sumOfDigits(int n) {
if (n == 0) return 0;
return (n % 10) + sumOfDigits(n / 10);
}
int main() {
int num;
printf("Enter an integer: ");
scanf("%d", &num);
printf("Sum of digits is %d\n", sumOfDigits(num));
return 0;
}