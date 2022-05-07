//3 WAP to demonstrate the use of printf and scanf statements to read and print the values of variables of different data types
#include<stdio.h>
int main(){
int num;
float amt;
char code;
double pi;
long int population;
char msg[10];
printf("\n Enter an integer:");
scanf("%d", &num);
printf("\n Enter an floating point value:");
scanf("%f", &amt);
printf("\n Enter an character: ");
scanf("%c", &code);
printf("\n Enter the value of pi:");
scanf("%e", &pi);
printf("\n Enter population of India:");
scanf("%ld", &population);
printf("\n Enter a message:");
scanf("%s", msg);
printf("\n Integer = %d \n amount = %f \n code = %c \n pi = %e \n population = %ld \n message = %s", num, amt, code, pi, population, msg);
return 0;
}