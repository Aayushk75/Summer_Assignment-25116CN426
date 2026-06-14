// Program to find the second largest element in an array
#include <stdio.h>
#include <limits.h>

void main() {
    int n, first = INT_MIN, second = INT_MIN, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second != INT_MIN) printf("Second largest: %d\n", second);
    else printf("No second largest element\n");
}