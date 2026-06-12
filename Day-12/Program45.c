// Program to check pallindrome number using function
#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reversed = 0;
    
    while (num > 0) {
        reversed = (reversed * 10) + (num % 10);
        num = num / 10;
    }
    
    if (original == reversed)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isPalindrome(n) == 1)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
        
    return 0;
}