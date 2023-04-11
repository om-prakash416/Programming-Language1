#include<stdio.h>
int main(){
int marks;
printf("\n enter the marks obtained: ");
scanf("%d",&marks);
if (marks>=75)
    printf("\n distinction");
else if (marks>= 60 && marks <75)
    printf("\n first division");
else if (marks>=50 && marks <60)
    printf("\n second division");
 else if (marks>=40 && marks<50)
    printf("\n third division");
else
    printf("\n fail");
return 0;
}
