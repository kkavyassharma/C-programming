//22 WAP to convert degrees Fahrenheit into degrees celsius.
#include<stdio.h>
int main(){
float fahrenheit, celsius;
printf("Enter temperature in fahrenheit:");
scanf("%f", &fahrenheit);
celsius = (0.56) * (fahrenheit - 32);
printf("The temperature in celsius is %f", celsius);
return 0;
}