//50 WAP to print the reverse of a number.
#include<stdio.h>
int main(){
int num, temp;
printf("Enter any number:");
scanf("%d", &num);
printf("The reversed number is :");
while (num != 0)
{
    temp = num % 10;
    printf("%d", temp);
    num = num/10;
}
return 0;
}