#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("enter the 2nd number");
    scanf("%d",&b);
    printf("enter the 3rd number");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("a is greatest number");
    }
    if (b>a && b>c)
    {
        printf("b is greatest number");
    }
    if (a==b==c)
    {
        printf("all number are equal");
    }
    if (a==b!=c)
    {
        printf("1st and 2nd number are equal but 3rd are unequal");
    }
    if (a!=b==c)
    {
        printf("2nd and 3rd number are equal but 1st are unequal");
    }
    else
    {
        printf("/n c is greatest number");
    }
    return 0;
}