//49 WAP to calculate pow(x,n) i.e., to calculate x to the power n using loop.
#include<stdio.h>
int main(){
int x, n, i, result = 1;
printf("Enter the value of x and n:");
scanf("%d %d", &x, &n);
for(i=1; i<=n; i++)
{ 
    result = result * x;
}
printf("pow(%d, %d) = %d", x, n, result);
return 0;
}