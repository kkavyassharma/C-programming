// 63WAP to calculate sum of cubes of first n numbers.
#include<stdio.h>
#include<math.h>
int main(){
int n, i, sum = 0;
printf("Enter the value of n:");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
  sum += pow(i,3);
}
printf("The sum of series is %d", sum);
return 0;
}