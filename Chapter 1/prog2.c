//2 WAP to demonstrate the use of printf statement to print values of different data types
#include<stdio.h>
int main(){
int num = 7;
float amt = 123.45;
char code = 'A';
double pi = 3.14;
long int population = 10000000;
char msg[] = "Hi";
printf("\n num = %d \t amt = %f \t code = %c \t pi = %e \n population = %ld \t message = %s ", num, amt, 
code, pi, population, msg);
return 0;
}