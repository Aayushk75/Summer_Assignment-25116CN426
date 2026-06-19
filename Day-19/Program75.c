//Program to find the transpose of a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nTransposed Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", a[j][i]); 
        }
        printf("\n");
    }
    return 0;
}