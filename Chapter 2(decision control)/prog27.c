//27 WAP to calculate the average of first n numbers.
#include<stdio.h>
int main(){
int n, i = 0;
float avg = 0.0, sum = 0.0;
printf("Enter value of n:");
scanf("%d", &n);
do 
{
    sum = sum + i;
    i = i+1;
    }while(i<=n);
    avg = sum/n;
    printf("\n The sum of first %d numbers is %f", n, sum);
    printf("\n Average of first %d numbers is %f", n, avg);
return 0;
}