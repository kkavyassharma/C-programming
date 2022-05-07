//19 WAP to swap two numbers using a temporary variable.
#include<stdio.h>
int main(){
int a, b, temp;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
printf("\n The numbers are a = %d and b = %d", a, b);
temp = a;
a = b;
b = temp;
printf("\n The numbers after swapping are a = %d and b = %d", a, b);
return 0;
}