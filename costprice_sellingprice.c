#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter the cost price: ");
    scanf("%d",&cp);
    printf("enter the selling price: ");
    scanf("%d",&sp);
    if (cp<sp)
    {
        printf("sellor in profit");
    }
    if (cp>sp)
    {
        printf("sellor in loss");
    }
    if (cp==sp)
    {
        printf("sellor neither in profit nor in loss");
    }
    return 0;
    
}