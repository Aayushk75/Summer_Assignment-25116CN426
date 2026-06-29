// Program to create a menu-driven array operations system
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30}, n = 3, ch, val;
    while(1) {
        printf("\n1.Display 2.Search 3.Exit\nChoice: ");
        scanf("%d", &ch);
        while(getchar() != '\n');
        if(ch == 3) break;
        if(ch == 1) {
            for(int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if(ch == 2) {
            printf("Value: "); scanf("%d", &val);
            while(getchar() != '\n');
            for(int i = 0; i < n; i++) if(arr[i] == val) printf("Found at index %d\n", i);
        }
    }
    return 0;
}