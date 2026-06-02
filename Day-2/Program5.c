//Program to find sum of digits of a number
#include <stdio.h>
void main(){
    int a,b=0,c,n;
    printf("Enter the number-");
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        b=b+a;
        n=n/10;
    }
    printf("The sum of digits is %d",b);
}