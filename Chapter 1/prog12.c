//12 WAP to find the largest of two numbers using the ternary operator.
#include<stdio.h>
int main(){
int a, b, large;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
large = (a>b)?a:b;
printf("The largest number is %d", large);
return 0;
}