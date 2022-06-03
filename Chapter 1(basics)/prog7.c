//7 WAP to perform addition, subtraction, division,and multiplication on two floating point numbers.
#include<stdio.h>
int main(){
float a, b, add, sub, mul, div;
printf("Enter two floating point numbers:");
scanf("%f %f", &a, &b);
add = a+b;
sub = a-b;
mul = a*b;
div = a/b;
printf("\n The sum of the two numbers is %f", add);
printf("\n The difference of the two numbers is %f", sub);
printf("\n The division of the two numbers is %f", div);
printf("\n The multiplication of the two numbers is %f", mul);
return 0;
}