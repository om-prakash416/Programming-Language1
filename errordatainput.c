#include<stdio.h>
main(){
    int num;
    char ch;
    printf("\n enter an int and a char value: ");
    if(scanf("%d %c",&num,&ch)==2)
    printf("\n data read successfully");
    else
    printf("\n error in data input");
}