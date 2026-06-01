//Program to calculate sum of first n natural numbers
#include <stdio.h>
int main(){
    int n,i;
    int a=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        a=a+i;
    }
    printf("The sum upto n is %d",a);
    return 0;
}