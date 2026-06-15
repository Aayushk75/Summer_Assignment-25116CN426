// Program to move zeroes to end
#include <stdio.h>

int main() {
    int n, arr[100], count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    
    while(count < n) {
        arr[count++] = 0;
    }

    printf("Result array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}