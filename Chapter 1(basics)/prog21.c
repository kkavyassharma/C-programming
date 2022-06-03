//21 WAP to calculate the average of two numbers and also find their deviation.
#include<stdio.h>
int main(){
int a, b; 
float avg, dev1, dev2;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
avg = (a+b)/2;
dev1 = a - avg;
dev2 = b - avg;
printf("Average of numbers is %f \n Deviation of first number is %f \n Deviation of second number is %f", avg, dev1, dev2);
return 0;
}