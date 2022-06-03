//4 WAP to calculate the area of a triangle using Hero's formula
#include<stdio.h>
#include<math.h>
int main(){
float a, b, c, s, A;
printf("Enter the sides of the triangle:");
scanf("%f %f %f", &a, &b, &c);
s = (a+b+c)/2;
A = sqrt(s*(s-a)*(s-b)*(s-c));
printf("semi perimeter of triangle is %f \n Area of triangle is %f", s, A);
return 0;
}