//42 WAP to print the multiplication table of n, where n is entered by the user.
#include<stdio.h>
int main(){
int n, i, mul = 0;
printf("Enter any integer:");
scanf("%d", &n);
for(i=0; i<=10; i++)
{
    mul = n * i; 
    printf(" \n %d X %d  = %d \n ", n, i, mul);
}
return 0;
}