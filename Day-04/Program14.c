//Program to find n-th term of the fibonacci series
#include <stdio.h>
int main() {
int n, t1 = 0, t2 = 1, nextTerm;
printf("Enter the position (n): ");
scanf("%d", &n);
for (int i = 1; i < n; ++i) {
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
printf("The %d-th Fibonacci term is: %d\n", n, t1);
return 0;
}