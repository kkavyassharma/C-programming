//12 WAP to calculate tax, given if income less than 150000 no tax, if income is 150000-300000 then 10% tax, if 300001-500000 then 20% tax , if income is above 500001 then tax 30%.
#include<stdio.h>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 500000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30
int main(){
double income, taxable_income, tax;
printf("Enter the income:");
scanf("%lf", &income);
taxable_income = income - 150000;
{   
    if(taxable_income<=0)
    printf("NO TAX");
    else if(taxable_income>=MIN1 && taxable_income<MAX1)
    tax = (taxable_income - MIN1) * RATE1;
    else if(taxable_income>=MIN2 && taxable_income<MAX2)
    tax = (taxable_income - MIN2) * RATE2;
    else if(taxable_income>=MIN3 )
    tax = (taxable_income - MIN3) * RATE3;
    }
    printf("\n TAX = %lf", tax);
return 0;
}