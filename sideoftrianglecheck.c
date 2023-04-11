#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the side a of tri.: ");
    scanf("%d",&a);
    printf("enter the side b of tri.: ");
    scanf("%d",&b);
    printf("enter the side c of tri.: ");
    scanf("%d",&c);
    if (a+b>c && a+c>b &&  b+c>a)
    {
        printf("valid triagle");
    }
    else
    {
        printf("invalid triagle");
    }
    return 0;
}