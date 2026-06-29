// Program for a menu-driven calculator
#include <stdio.h>

int main() {
    int ch;
    double a, b;
    while(1) {
        printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\nChoice: ");
        scanf("%d", &ch);
        while(getchar() != '\n'); 
        if(ch == 5) break;
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);
        while(getchar() != '\n'); 
        switch(ch) {
            case 1: printf("Result: %.2lf\n", a + b); break;
            case 2: printf("Result: %.2lf\n", a - b); break;
            case 3: printf("Result: %.2lf\n", a * b); break;
            case 4: printf("Result: %.2lf\n", a / b); break;
        }
    }
    return 0;
}