#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value a  after swap is %d \n",a);
    printf("value b after swap is %d",b);
    return 0;
}