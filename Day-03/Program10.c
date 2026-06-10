//Program to print prime numbers in a range
#include <stdio.h>
int main() {
int i, j, count;
printf("Enter the range:");
scanf("%d", &i);
printf("Prime numbers up to %d are:\n", i);
for (; i >= 2; i--) {
count = 0;
for (j = 1; j <= i; j++) {
if (i % j == 0) {
count++;
}
}
if (count == 2) {
printf("%d ", i);
}
}
return 0;
}