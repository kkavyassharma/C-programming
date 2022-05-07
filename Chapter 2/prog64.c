//64 WAP to calulate sum of squares of first n even numbers.
#include<stdio.h>
#include<math.h>
int main(){
int n, i, sum = 0;
printf("Enter the value of n:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
    if(i%2 == 0)
   sum += pow(i,2);
}

printf("The sum of the series is %d", sum);
return 0;
}