// Program to check perfect number using function
#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    
    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isPerfect(n) == 1)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
        
    return 0;
}