#include<stdio.h>
//function declaration
int sum(int a,int b);
int main(){
    int n1,n2,total=0;
    printf("\n enter the 1st number: ");
    scanf("%d",&n1);
    printf("\n enter the 2nd number: ");
    scanf("%d",&n2);
    total=sum(n1+n2);
    //function call
    printf("\n total=%d",total);
    return 0;
}
//function defination
int sum(int a,int b)
{
    int result;
    result=a+b;
    return result;  
}
