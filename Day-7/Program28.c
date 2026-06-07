//Program to find reverse of a number using recursion
#include <stdio.h>
void reverseNumber(int n) {
if (n == 0) return;
printf("%d", n % 10); // Print the last digit
reverseNumber(n / 10); // Move to the remaining digits
}
int main() {
int num;
printf("Enter a number to reverse: ");
scanf("%d", &num);
printf("Reversed number: ");
if (num == 0) {
printf("0");
} 
else {
reverseNumber(num);
}
printf("\n");
return 0;
}