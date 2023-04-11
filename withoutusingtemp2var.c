#include<stdio.h>
int main(){
    int n1,n2;
    printf("\n enter the 1st number: ");
    scanf("%d",&n1);
    printf("\n enter the 2nd number: ");
    scanf("%d",&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf(" \n 1st num after swap is %d ",n1);
    printf("\n 2nd num after swap is %d",n2);
    return 0;
}