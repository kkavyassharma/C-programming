//9 WAP to test whether a number entered is positive, negative, or equal to zero.
#include<stdio.h>
int main(){
int num;
printf("Enter a number:");
scanf("%d", &num);
{
    if(num==0)
    printf("\n The number entered is zero");
    else if(num>0)
    printf("\n The number entered is positive");
    else
    printf("\n The number entered is negative");
}
return 0;
}