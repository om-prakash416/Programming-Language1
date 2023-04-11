#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("\n enter  number: ");
    scanf("%d ",n1);
    printf("\n enter  number: ");
    scanf("%d ",n2);
    printf("\n enter 3rd number: ");
    scanf("%d ",n3);
    if (n1>n2 && n1>n3)
        printf("\n %d is the lagest number",n1);
    else if (n2>n1 && n2>n3)
        printf("\n %d is the largest number",n2);
    else 
    printf("\n %d is the largest number",n3);
    return 0;
}