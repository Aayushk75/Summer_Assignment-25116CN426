//Program to find the largest prime factor of a number
#include <stdio.h>
int main() {
long n, i;
printf("Enter a number: ");
scanf("%ld", &n);
for (i = 2; i <= n; i++) {
if (n % i == 0) {
n /= i;
i--;
}
}
printf("Largest prime factor: %ld\n", i);
return 0;
}