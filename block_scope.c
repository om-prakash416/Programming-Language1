#include<stdio.h>
int main(){
    int x=10;
    int i=0;
    printf("\n the value of x outside the while loop is %d",x);
    while (i<3)
    {
        int x=i;
        printf("\n the value of x inside the while loop is %d",x);
        i++;
    }
    printf("\n the value of x outside the while loop is %d",x);
    return 0;
}