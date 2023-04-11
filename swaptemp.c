#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("\n eneter the 1st number: ");
    scanf("%d",&n1);
    printf("\n enter the 2nd number: ");
    scanf("%d",&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n 1st number after swap is %d",n1);
    printf("\n 2nd number after swap is %d",n2);
    return 0;
}