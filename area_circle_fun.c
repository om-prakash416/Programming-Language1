#include<stdio.h>
float cal_area(float r);
int main(){
    float area,radius;
    printf("enter the radius of circle: ");
    scanf("%f",&radius);
    area=cal_area(radius);
    printf("\n area of the circle with radius %f=%f",radius,area);
    return 0;
}
    float cal_area(float radius){
        return (3.14* radius*radius);
    }    