//65 WAP to find whether the given number is an armstrong number or not.
#include<stdio.h>
#include<math.h>
int main(){
int num, rem, div, sum = 0;
printf("Enter a number:");
scanf("%d", &num);
div = num;
while (div > 0)
{
   rem = div%10;
   sum += pow(rem, 3);
   div = div/10;
}
if(sum == num)
printf("The number is armstrong");
else
printf("The number is not armstrong");
return 0;
}