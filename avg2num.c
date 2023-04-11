#include<stdio.h>
int main(){
    int n1,n2;
    float avg,dev1,dev2;
    printf("\n enter the two number: ");
    scanf("%d %d",&n1,&n2);
    avg =(n1+n2)/2;
    dev1=(n1-n2);
    dev2= (n2-n1);
    printf("\n AVERAGE=%.2f",avg);
    printf("\n deviation of 1st num=%.2f ",dev1);
    printf("\n deviation of 2nd num =%.2f",dev2);
    return 0;
}