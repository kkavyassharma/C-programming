
//45 WAP using for loop to calculate the average of first n numbers.
#include<stdio.h>
int main(){
int n, i, sum = 0;
float avg = 0;
printf("Enter the value of n:");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
  sum = sum + i;
}
avg = (float) sum/n;
  printf("\n average of first %d numbers is %f", n, avg);
return 0;
}