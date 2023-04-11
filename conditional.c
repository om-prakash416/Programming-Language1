#include<stdio.h>
int main(){
    int a,b,c,large;
    printf("\n enter the 1st num: ");
    scanf("%d",&a);
    printf("\n enter the 2nd num: ");
    scanf("%d",&b);
    printf("\n enter the 3rd num: ");
    scanf("%d",&c);
    large =a>b?(a>c?a:c):(b>c?b:c);
    printf("\n the largest number is :%d",large);
    return 0;

}