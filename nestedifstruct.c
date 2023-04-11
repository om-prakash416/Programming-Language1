#include<stdio.h>
main(){
    int x,y;
    printf("\n enter two number: ");
    scanf("%d %d",&x,&y);
    if(x ==y)
    printf("\n the two numbers are equal");
    else if (x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else
    printf("\n %d is less than %d",x,y);
    return 0;
}