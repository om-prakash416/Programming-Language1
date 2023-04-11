#include<stdio.h>
int main(){
    float pi,r,area,circumference;
    pi=3.14;
    printf("\n enter the radius: ");
    scanf("%f",&r);
    area=(pi*r*r);
    circumference=(2*pi*r);
    printf("\n The area of circle is %f",area);
    printf("\n the circumference of circle is %f",circumference);
    return 0;

}