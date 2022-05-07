//44 WAP using for loop to print all the numbers from m to n, thereby classifying them as even or odd.
#include<stdio.h>
int main(){
int m, n, i;
printf("Enter any two numbers:");
scanf("%d %d", &m, &n);
for(i=m; i<=n; i++)
{
    if(i%2 == 0)
    printf("\n %d = even", i);
    else
    printf("\n %d = odd", i);
}
return 0;
}