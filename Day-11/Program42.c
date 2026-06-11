// Program to find maximum of two numbers using a function
#include <stdio.h>

int findMaximum(int a, int b);

int main() {
    int num1, num2, max;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    max = findMaximum(num1, num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}