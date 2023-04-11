#include<stdio.h>
int main(){
    int a, b;
    printf("enter a : ");
    scanf("%d",&a);
     printf("enter b: ");
    scanf("%d",&b);
    int temp = a;
    a= b;
    b= temp;
    printf("the value of a after swap is %d\n",a);
    printf("the value of b after swap is %d",b);
    return 0;

}