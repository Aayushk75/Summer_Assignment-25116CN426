//Program to find sum of two numbers using a function
#include <stdio.h>
int findSum(int a, int b);

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = findSum(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

int findSum(int a, int b) {
    return a + b;
}