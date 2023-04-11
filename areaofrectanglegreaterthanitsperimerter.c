#include<stdio.h>
int main(){
    int l,b;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter the breadth: ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if ( a>p )
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area not greater than perimeter");
    }
    return 0;
}