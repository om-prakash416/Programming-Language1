#include<stdio.h>
int main(){
    float principle,rate,time,si;
    printf("enter principle:");
    scanf("%f",&principle);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("your si is :%f",si);
    return 0;
}