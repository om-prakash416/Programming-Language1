#include<stdio.h>
int main(){
int a,b,c;
printf("enter the age of 1st: ");
scanf("%d",&a);
printf("enter the age of 2nd: ");
scanf("%d",&b);
printf("enter the age of 3rd: ");
scanf("%d",&c);
if (a<b && a<c)
{
    printf("RAM is youngest than other");
}
if (b<c && b<a)
{
    printf("SHYAM is youngest than other");
}
if ( c<a && c<b)
{
    printf("AJAY is youngest than other");
}
return 0;
}