#include<stdio.h>
void add(int *n);
int main(){
    int num=2;
    printf("\n the value of number before calling the function=%d",num);
    add(&num);
    printf("\n the value of num after calling the function=%d",num);
}
void add(int *n){
    *n=*n+10;
    printf("\n the value of the num in the called function=%d",n);
}