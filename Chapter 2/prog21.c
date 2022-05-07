//21 WAP to calculate the sum of the first 10 numbers.
#include<stdio.h>
int main(){
int i = 0, sum = 0;
while(i<=10)
{
    sum += i;
    ++i;
}
printf("sum = %d", sum);
return 0;
}