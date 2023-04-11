#include<stdio.h>
int main(){
    float total_amt,amt,sub_total,discount_amt,tax_amt,qty,val,discount,tax;
printf("\n enter the quantity of item sold: ");
scanf("%f",&qty);
printf("\n enetr the value of item: ");
scanf("%f",&val);
printf("\n enter the discount percentage: ");
scanf("%f",&discount);
printf("\n enter the tax: ");
scanf("%f",&tax);
amt=qty*val;
discount_amt=(amt * discount)/100.0;
sub_total=(amt-discount_amt);
tax_amt=(sub_total* tax)/100.0;
total_amt=sub_total+tax_amt;
printf("\n\n\n****** BILL ******");
printf("\n Quantity sold:%f",qty);
printf("\n Price per item:%f",val);
printf("\n\t\t-------------------");
printf("\n Amount:%f",amt);
printf("\n Discount: -%f",discount_amt);
printf("\n Discounted TOtal: %f",sub_total);
printf("\nTax:+%f",tax_amt);
printf("\n \t\t-----------");
printf("\n Total Amount %f",total_amt);
return 0;
}