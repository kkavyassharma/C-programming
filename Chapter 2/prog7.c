//7 WAP to find whether a given year is a leap year or not.
#include<stdio.h>
int main(){
int year;
printf("Enter any year:");
scanf("%d", &year);
{
    if((year%4==0) && ((year%10 != 0) || (year%400 == 0)))
    printf("The year is a leap year");
    else
    printf("The year is not a leap year");
}
return 0;
}