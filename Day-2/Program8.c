// Program to Check whether a number is pallindrome
#include <stdio.h>
void main(){
    int a,b=0,c,n,x=0;
    printf("Enter the number");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(x==b){
        printf("The number is a pallindrome number");
    }
    else{
        printf("The number is not a pallindrome number");
    }
}