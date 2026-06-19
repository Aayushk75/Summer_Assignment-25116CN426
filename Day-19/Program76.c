//Program to find the sum of diagonal elements of a matrix
#include <stdio.h>

int main() {
    int n, i, j, a[10][10], sum = 0;

    printf("Enter size of square matrix (N x N): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("\nSum of main diagonal elements: %d\n", sum);
    return 0;
}