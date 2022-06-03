//20 WAP that accepts a number from 1 to 10. Print whether the number is even or odd using switch case statement.
#include<stdio.h>
int main(){
int num;
printf("Enter any number from 1 to 10:");
scanf("%d", &num);
switch(num)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    printf("\n Number is odd");
    break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    printf("\n Number is even");
    break;
    default: printf("\n Wrong number");
}
return 0;
}
            //or
#include<stdio.h>
int main(){
int num, rem;
printf("Enter a number from 1 to 10");
scanf("%d", &num);
rem = num%2;
switch(rem)
{
    case 0: printf("The number is even");
    break;
    case 1: printf("The number is odd");
    break;
    default: printf("Wrong number");
}
return 0;
}