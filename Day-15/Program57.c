//Program to reverse an array
#include <stdio.h>

int main() {
    int n, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}