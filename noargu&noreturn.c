#include<stdio.h>
/*function declaration */
void printline(void);
void value (void);
main(){
    printline();
    value();
    printline();
}
/*function : printline ()*/
void printline(void) /*contains no arguments */
{
    int i;
    for(i=1;i<35;i++)
    printf("%c",'-');
    printf("\n");
}
/* function2: value()  */
void value(void) /*contains no arguments */
{
int year,period;
float inrate,sum,principal;
printf("printcipal amount?");
scanf("%f",&principal);
printf("interest rate?");
scanf("%f",&inrate);
printf("period?");
scanf("%d",&period);
sum = principal;
year = 1;
while(year <= period)
{
    sum = sum*(1+inrate);
    year = year+1;
}
printf("\n 8.2f %5.2f %5d %12.2f \n",principal,inrate,period,sum);
}
