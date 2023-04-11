#include<stdio.h>
int main(){
    int n1,n2,n3,big=0;
    printf("\n enter 1st number: ");
    scanf("%d",&n1);
     printf("\n enter 2nd number: ");
    scanf("%d",&n2);
     printf("\n enter 3rd number: ");
    scanf("%d",&n3);
    if (n1>n2)
    {
        if (n1>n3)
        {
            printf("\n %d is greater than %d and %d",n1,n2,n3);
        }
        else
        printf("\n %d is greater than %d and %d",n3,n1,n2);
    }
    else if (n2>n3)
        printf("\n %d greater than %d and %d",n3,n1,n2);
    else 
    printf("\n %d is greater than %d and %d",n3,n1,n2);
    return 0;
}