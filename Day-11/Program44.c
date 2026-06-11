//Program to find factorial of a number using a function
#include <stdio.h>

unsigned long long findFactorial(int n);

int main() {
    int num;
    unsigned long long factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Function call
        factorial = findFactorial(num);
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}

unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}