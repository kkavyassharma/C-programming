//8 WAP to demonstrate the use of nested if structure.
#include<stdio.h>
int main(){
int x, y;
printf("Enter two integers:");
scanf("%d %d", &x, &y);
{
    if(x==y)
    printf("The numbers are equal");
    else if(x>y)
    printf("%d is greater than %d", x, y);
    else
    printf("%d is less than %d", x, y);
}
return 0;
}