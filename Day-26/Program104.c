// Program for a quiz application
#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Size of int in bytes?\n1) 1\n2) 2\n3) 4\nYour answer: ");
    scanf("%d", &ans);
    if (ans == 3) score++;

    printf("\nQ2. Who created C?\n1) Ritchie\n2) Gosling\n3) Stroustrup\nYour answer: ");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("\nFinal Score: %d/2\n", score);
    return 0;
}