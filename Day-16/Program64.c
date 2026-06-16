//
#include <stdio.h>

int main() {
    int n, newSize = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}