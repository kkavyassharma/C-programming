//51 WAP to enter a number and then calculate the sum of its digits.
#include<stdio.h>
int main(){
int num, temp, sum= 0;
printf("Enter any number:");
scanf("%d", &num);
while (num != 0)
{
    temp = num%10;
    sum = sum + temp;
    num = num / 10;
}
printf("The sum of digits of the number is: %d", sum);
return 0;
}