//60 WAP to sum the series 1/sq2 + 1/sq3 ..... 1/sqn.
#include<stdio.h>
#include<math.h>
int main(){
int n, deno;
float sum = 0.0, i, a;
printf("Enter the value of n :");
scanf("%d", &n);
for(i = 1.0; i <= n; i++)
{
    deno = pow(i, 2);
    a = (float) 1/deno;
    sum += a;
}
printf("The sum of the series is : %f", sum);
return 0;
}