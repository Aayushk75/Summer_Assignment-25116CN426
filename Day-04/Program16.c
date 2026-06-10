//Program to Print Armstrong numbers in a range
#include <stdio.h>
int main() {
int start, end, sum, rem;
printf("Enter range: ");
scanf("%d %d", &start, &end);
for (int i = start; i <= end; i++) {
sum = 0;
for (int num = i; num > 0; num /= 10) {
rem = num % 10;
sum += rem * rem * rem;
}
if (sum == i) printf("%d ", i);
}
return 0;
}