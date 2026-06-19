//Program to substract two matrices
#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], b[10][10], diff[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("\nResultant Matrix (A - B):\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}