#include<stdio.h>
int main(){
    int a,b;
    printf("enter the dividend:");
    scanf("%d",&a);
    printf("enter the divisor:");
    scanf("%d",&b);
    int q;
    q=a/b;
    int r;
    r=a-b*q;
    printf("remainder of %d divided by %d then :%d",a,b,r);
    return 0;
    }