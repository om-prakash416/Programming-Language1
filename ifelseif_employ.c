#include<stdio.h>
main(){
    char ch;
    float sal,bonus,amt_to_be_paid;
    printf("\ enter the sex of the employee(m or f): ");
    scanf("%c",&ch);
    printf("\n enter the salary of the employee: ");
    scanf("%f",&sal);
    if (ch=='m')
        bonus=0.05*sal;
        else
        bonus=0.10*sal;
        if (sal<10000)
        bonus +=0.02*sal;
    amt_to_be_paid=sal+bonus;
    printf("\n salary=%f",sal);
    printf("\n bonus =%f",bonus);
    printf("\n *************************************");
    printf("\n amountto be paid: %f",amt_to_be_paid);
    return 0;
    
}