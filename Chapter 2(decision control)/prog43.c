//43 WAP to print numbers from m to n.
#include<stdio.h>
int main(){
int m, n, i;
printf("Enter any two numbers:");
scanf("%d %d", &m, &n);
for(i=m; i<=n; i++)
{
    printf("\n %d \n", i);
}
return 0;
}