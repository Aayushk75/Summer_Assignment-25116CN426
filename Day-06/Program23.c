// Program to Count set bits in a number
#include <stdio.h>
int main() {
int num, count = 0;
printf("Enter a number: ");
scanf("%d", &num);
for (; num > 0; num = num / 2) {
if (num % 2 == 1) {
count = count + 1;
}
}
printf("Number of 1s in binary: %d", count);
return 0;
}