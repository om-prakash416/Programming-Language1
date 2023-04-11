#include<stdio.h>
int main(){
    int n,digit_at_ones_place;
    printf("\n enter any number: ");
    scanf("%d",&n);
    digit_at_ones_place=n%10;
    printf("\n the digit at ones place of %d is %d",n,digit_at_ones_place);
    return 0;
}