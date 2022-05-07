//14 WAP to demonstrate the use of assignment operators.
#include<stdio.h>
int main(){
int a, b;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
a += b * 4 - 7;
printf("After evaluation a = %d and b = %d", a, b);
return 0;
}