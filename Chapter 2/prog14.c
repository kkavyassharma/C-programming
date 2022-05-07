//14 WAP to input three numbers and then find largest of them using && operator.
#include<stdio.h>
int main(){
int a, b, c, large;
printf("Enter three integers:");
scanf("%d %d %d", &a, &b, &c);
{
    if(a>b && a>c)
    large = a;
    else if(b>a && b>c)
    large = b;
    else 
    large = c;
}
printf("The largest number is %d", large);
return 0;
}