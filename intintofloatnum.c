#include<stdio.h>
int main(){
    float f_num;
    int i_num;
    printf("\n enter any integer: ");
    scanf("%d",&i_num);
    f_num=(float)i_num;
    printf("\n the floating point variant of %d is =%f",i_num,f_num);
    return 0;
}