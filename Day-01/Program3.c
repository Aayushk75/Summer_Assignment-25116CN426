//Program to find factorial of a number
#include <stdio.h>
int main(){
    int i,n,a=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        a=a*i;
    }
    printf("Factorial of %d id %d",n,a);
    return 0;
}