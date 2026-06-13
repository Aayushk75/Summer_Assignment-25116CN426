 //Program to Find sum and average of  an array
#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / 5);

    return 0;
}