#include<stdio.h>
int main(){
    int n1=3,n2=5;
    printf("\n initial value of n1= %d and n2=%d",n1,n2);
    n1 +=n2 *4-7;
    printf("\n after the evaluation of the expression n1=%d and n2 =%d",n1,n2);
    return 0;
}