//
#include <stdio.h>

int main() {
    int n, totalSum, actualSum = 0, num;

    printf("Enter total expected elements (N): ");
    scanf("%d", &n);

    totalSum = (n * (n + 1)) / 2;

    printf("Enter the %d numbers: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        actualSum += num;
    }

    printf("The missing number is: %d\n", totalSum - actualSum);
    return 0;
}