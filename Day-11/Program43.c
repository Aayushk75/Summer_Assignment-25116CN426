// Program to check if a number is prime using a function
#include <stdio.h>

// Function declaration
int isPrime(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}