#include<stdio.h>
int main() {
    int n1,n2;
    int add=0,sub=0,mul=0,div=0,modiv=0,fdiv=0;
    printf("\n enter the number  : ");
    scanf("%d",&n1);
    printf("\n enter the number: ");
    scanf("%d",&n2);
    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    div=n1/n2;
    modiv=n1%n2;
    fdiv=(float)n1/n2;
    printf("\n add=%d",add);
    printf("\n sub=%d",sub);
    printf("\n mul=%d",mul);
    printf("\n div=%d",div);
    printf("\nmodiv=%d",modiv);
    printf("\nfdiv=%.2f",fdiv);
    return 0;
}