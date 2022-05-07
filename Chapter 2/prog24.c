//24 WAP to display the largest of six numbers using ternary operator.
#include<stdio.h>
int main(){
int i = 0, large = -1, num;
while(i<=5)
{
    printf("Enter any number:");
    scanf("%d", &num);
    large = num>large?num:large;
    i++;
}
printf("The largest number is %d", large);
return 0;
}