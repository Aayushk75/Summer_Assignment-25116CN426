//Program for linear search
#include <stdio.h>

void main() {
    int n, target, found = -1, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) printf("Found at index: %d\n", found);
    else printf("Not found\n");
}