//61 WAP to sum the series 1/2 + 2/3 + ..........n/n+1.
#include<stdio.h>
int main(){
int n;
float sum = 0.0, i;
printf("Enter the value of n:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
   sum += i/(i+1);
}
printf("The sum of the series is %f", sum);
return 0;
}