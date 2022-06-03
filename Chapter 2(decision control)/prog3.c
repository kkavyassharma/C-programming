//3 WAP to find the largest of two numbers.
#include<stdio.h>
int main(){
int a, b, large;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
{
    if(a>b)
    large = a;
    else
    large = b;
    printf("large = %d", large);
}
return 0;
}