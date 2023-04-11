#include<stdio.h>
int greater(int a,int b,int c);
int main(){
    int n1,n2,n3,large;
    printf(" enter the number: ");
    scanf("%d\n %d\n %d\n ",&n1,&n2,&n3);
    large=greater(n1,n2,n3);
    printf("\n largest number=%d",large);
    return 0;
}
int greater(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
        if (b>a && b>c)
        return b;
        else
        return c;
}