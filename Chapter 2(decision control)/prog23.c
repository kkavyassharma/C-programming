//23 WAP to calculate the sum of numbers from m to n.
#include<stdio.h>
int main(){
int m, n, sum = 0;
printf("Enter the value of m and n:");
scanf("%d %d", &m, &n);
while(m <= n)
{
    sum = sum + m;
    ++m;
}
printf("sum = %d", sum);
return 0;
}