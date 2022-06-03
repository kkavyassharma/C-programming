//46 WAP using for loop to calculate factorial of a number.
#include<stdio.h>
int main(){
int num, i, fac = 1;
printf("Enter any number:");
scanf("%d", &num);
if(num == 0)
fac = 1;
else
{
for(i=1; i<=num; i++)
    fac = fac*i;
}
 printf("\n factorial of %d is %d \n", num, fac);
return 0;
}