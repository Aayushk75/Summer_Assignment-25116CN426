// Program to find the frequency of an element in an array
#include <stdio.h>

void main() {
    int n, target, count = 0, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to count: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) count++;
    }

    printf("Frequency: %d\n", count);
}