#include<stdio.h>
int main(){
    // int n;
    // printf("enter the number : ");
    // scanf("%d",&n);
    for (int i = 1; i <=100; i++)
    {
        if (i%2==0)//even
        { // i is a factor of n
            continue;
        }
        printf(" %d ",i);
    }
    return 0;
}