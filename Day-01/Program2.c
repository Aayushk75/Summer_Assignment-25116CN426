//Program to print multiplication table of a given number
#include <stdio.h>
int main (){
    int b,c;
    int d=1;
    printf("Enter the number");
    scanf("%d",&b);
    printf("The table is");
    for(c=1;c<=10;c++){
        d=b*c;
        printf("\n");
        printf("%d",d);
    }
    return 0;
}