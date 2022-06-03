//25 WAP to calculate the bill amount for an item given its quantity sold, value, discount, and tax.
#include<stdio.h>
int main(){
float quan_sold, val, amt, dis, dis_amt, sub_total, tax, tax_amt, total; 
printf("Enter the quantity of product sold:");
scanf("%f", &quan_sold);
printf("Enter the price of each product:");
scanf("%f", &val);
printf("Enter the discount percentage:");
scanf("%f", &dis);
printf("Enter the tax percentage:");
scanf("%f", &tax);
amt = quan_sold * val;
dis_amt = (amt * dis)/100;
sub_total = amt - dis_amt;
tax_amt = (sub_total * tax)/100;
total = sub_total + tax_amt;
printf("\n *************BILL***************");
printf("\n Quantity sold = %f", quan_sold);
printf("\n Discount = %f", dis);
printf("\n Tax = %f", tax);
printf("\n Total amount to be paid = %f", total);
return 0;
}