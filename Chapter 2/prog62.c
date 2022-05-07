//62 WAP to sum the series 1/1 + 4/2 + 27/3........
#include<stdio.h>
#include<math.h>
int main(){
int n;
float sum = 0.0, i;
printf("Enter the value of n:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
   sum += pow(i,i)/i;
}
printf("The sum of the series is %f", sum);
return 0;
}