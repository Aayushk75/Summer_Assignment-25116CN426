//Program to rotate an array right
#include <stdio.h>

int main() {
    int n, d, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter rotation shift: ");
    scanf("%d", &d);

    d = d % n;

    printf("Right rotated array: ");
    for(int i = n - d; i < n; i++) printf("%d ", arr[i]);
    for(int i = 0; i < n - d; i++) printf("%d ", arr[i]);
    
    return 0;
}