//Program to Check Armstrong number
#include <stdio.h>
int main() {
int num, original, rem, sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
original = num;
while (original > 0) {
rem = original % 10;
sum = sum + (rem * rem * rem);
original = original / 10;
}
if (sum == num)
printf(" It is an Armstrong number\n");
else
printf(" It is not an Armstrong number\n");
return 0;
}