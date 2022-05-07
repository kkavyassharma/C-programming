//67 WAP using for loop to calculate the value of an investment, given the initial value of investment and the annual interest. Calculate the value of investment over a period of time.
#include<stdio.h>
int main(){
float amt, interest, futint;
int year, i;
printf("\n Enter the amount to be invested:");
scanf("%f", &amt);
printf("\n Enter the  interest rate:");
scanf("%f", &interest);
printf("\n Enter the time:");
scanf("%d", &year);
 printf("\n year \t \t amount ");
for (i = 1; i <= year; i++)
{
   futint = amt * (interest/100);
   amt += futint;
   printf("\n %d \t \t %f ", i, amt);
}
return 0;
}