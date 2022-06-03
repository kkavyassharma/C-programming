//15 WAP to calculate area of circle.
#include<stdio.h>
int main(){
float  Radius;
double Area;
printf("Enter radius of circle:");
scanf("%f", &Radius);
Area = 3.14 * Radius * Radius;
printf("The area of circle is %.2le", Area);
return 0;
}