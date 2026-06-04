// Program to Generate Fibonacci series upto n term
#include <stdio.h>
int main() {
int n, t1 = 0, t2 = 1, nextTerm;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Fibonacci Series up to %d terms: ", n);
while (n > 0) {
printf("%d ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
n--; 
}
return 0;
}