
//18 WAP to print the digit at ones place of a number.
#include<stdio.h>
int main(){
int num;
printf("Enter any number:");
scanf("%d", &num);
printf("The ones digit of the number is %d", num%10);
return 0;
}