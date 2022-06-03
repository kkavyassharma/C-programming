//58 WAP to calculate GCD of two numbers.
#include<stdio.h>
int main(){
int num1, num2, temp;
int dividend, divisor, remainder;
printf("\n Enter the first number");
scanf("%d", &num1);
printf("\n Enter second number");
scanf("%d", &num2);
if(num1>num2)
{
    dividend = num1;
    divisor = num2;
}
else 
{
    dividend = num2;
    divisor = num1;
}
while (divisor)
{
    remainder = dividend%divisor;
    dividend = divisor;
    divisor = remainder;
}
printf("\n GCD of %d and %d is %d", num1, num2, dividend);
return 0;
}
