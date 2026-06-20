//Program for matrix multiplication
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, a[10][10], b[10][10], res[10][10] = {0};

    printf("Enter rows and cols for Matrix 1 & 2: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible.\n");
        return 0;
    }

    printf("Enter Matrix 1 elements:\n");
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);

    printf("Enter Matrix 2 elements:\n");
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);

    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                res[i][j] += a[i][k] * b[k][j];

    printf("Result Matrix:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) printf("%d\t", res[i][j]);
        printf("\n");
    }
    return 0;
}