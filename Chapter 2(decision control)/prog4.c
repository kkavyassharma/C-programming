//4 WAP to find whether the given number is even or odd.
#include<stdio.h>
int main(){
int num;
printf("Enter any integer:");
scanf("%d", &num);
{
    if(num%2==0)
    printf("\n The number is even");
    else 
    printf("\n The number is odd");
}
return 0;
}