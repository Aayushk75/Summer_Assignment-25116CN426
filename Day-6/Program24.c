//Program to Find x^n without pow()
#include <stdio.h>
int main() {
double base, result = 1.0;
int exponent;
printf("Enter base: ");
scanf("%lf", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);
for (int i = 0; i < exponent; i++) {
result = result * base;
}
printf("Result: %.2f", result);
return 0;
}