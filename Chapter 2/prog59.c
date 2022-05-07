//59 WAP to sum the series 1 + 1/2 + 1/3 .........+ 1/n.
#include<stdio.h>
int main(){
int n, i;
float sum = 0.0;
printf("Enter the value of n:");
scanf("%d", &n);
for(i=1; i <= n; i++)
{
  sum += (float) 1/i;
}
printf("The sum of the series is %f", sum);
return 0;
}