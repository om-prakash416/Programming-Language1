#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if (n%5==0 || n%3==0)
    {
        printf("number is divisible by 5 or 3");
    }
    else{
        printf("number divisible by neither 5 nor 3");
    }
    return 0;
}