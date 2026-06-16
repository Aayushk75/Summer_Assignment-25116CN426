//program to Find maximum frequency element.
#include <stdio.h>

int main() {
    int n, maxElement, maxCount = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Max frequency element: %d (%d times)\n", maxElement, maxCount);
    return 0;
}