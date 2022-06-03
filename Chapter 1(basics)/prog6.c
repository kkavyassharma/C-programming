
//6 WAP to perform addition, subtraction, division, int division, multiplication, and modulus division on two integers.
#include<stdio.h>
int main(){
int a, b, add, sub, int_div, mul, mod;
float div;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
add = a+b;
sub = a-b;
div =(float) a/b;
int_div = a/b;
mul = a*b;
mod = a%b;
printf("\n The sum of the two numbers is %d", add);
printf("\n The difference of the two numbers is %d", sub);
printf("\n The division of the two numbers is %f", div);
printf("\n The integer division of the two numbers is %d", int_div);
printf("\n The multiplication of the two numbers is %d", mul);
printf("\n The modulus of the two numbers is %d", mod);
return 0;
}