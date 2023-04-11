#include<stdio.h>
int main(){
    int n;
    printf("enter the obtained marks: ");
    scanf("%d",&n);
    if (n>91 && n<100)
    {
    printf("A grade");
    }
    if (n<61 && n<80)
    {
        printf("B grade \n");
    }
       if (n>41 && n<60)
    {
    printf("c grade\n");
    }
    if (n<40)
    {
        printf("fail");
    }     
    return 0;
}