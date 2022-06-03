//8 WAP to subtract two long integers.
#include<stdio.h>
int main(){
long int a, b, sub;
printf("Enter two long integers:");
scanf("%ld %ld", &a, &b);
sub = a-b;
printf("The subtraction of the two numbers is %ld", sub);
return 0;
}