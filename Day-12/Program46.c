// Program to check armstrong number using function
#include <stdio.h>

int isArmstrong(int num) {
    int original = num, sum = 0, rem;
    
    while (num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    
    if (original == sum)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    
    if (isArmstrong(n) == 1)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
        
    return 0;
}