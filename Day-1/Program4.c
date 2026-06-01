//Program to count digits in a given number
#include <stdio.h>
void main(){
    int n,count=0;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive number");
    }
    if(n==0){
        count=1;}
        while(n!=0){
            n=n/10;
            count++;
        }
        printf("%d",count);

    }