#include<stdio.h>
int main(){
    int n;
    printf("entere a number : ");
    scanf("%d",&n);
    for (int i = 2; i <=n-1; i++){
        if (n%i==0) //1 is a factor of n
        printf("the given number is composite\n");
        break;
        }
    
        return 0;
}