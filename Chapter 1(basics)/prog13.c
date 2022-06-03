//13 WAP two find largest of three numbers using ternary operator.
#include<stdio.h>
int main(){
int a, b, c, large;
printf("Enter three integers:");
scanf("%d %d %d", &a, &b, &c);
large = ((a>b)?(a>c?a:c):(b>c?b:c));
printf("The largest number is %d", large);
return 0;
}