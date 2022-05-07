//20 WAP to swap two numbers without using a temporary variable.
#include<stdio.h>
int main(){
int a, b;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
printf("\n The numbers are a = %d and b = %d", a, b);
a = a+b;
b = a-b;
a = a-b;
printf("\n The numbers after swapping are a = %d and b = %d", a, b);
return 0;
}