//66 WAP to print the multiplication table.
#include<stdio.h>
int main(){
int num, i, mul;
printf("\n Enter a number:");
scanf("%d", &num);
printf("\n The Multiplication table of %d is:\n", num);
for ( i = 0; i <= 20; i++)
{
    mul = num * i;
    printf("\t \n %d x %d = %d", num, i, mul);
}

return 0;
}