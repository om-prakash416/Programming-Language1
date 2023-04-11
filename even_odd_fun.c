#include<stdio.h>
int evenodd(int);
int main(){
    int num,flag;
    printf("\n ente4r the number: ");
    scanf("%d",&num);
    flag=evenodd(num);
    if(flag==1)
    printf("\n %d is even",num);
    else
    printf("\n %d is odd",num);
    return 0;
}
int evenodd(int a){
    if(a%2==0)
    return 1; 
    else
    return 0;
}