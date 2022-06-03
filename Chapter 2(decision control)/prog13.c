//13 WAP to find the greatest of three numbers.
#include<stdio.h>
int main(){
int a, b, c, large;
printf("Enter three integers:");
scanf("%d %d %d", &a, &b, &c);
{
    if(a>b)
    {
        if(a>c)
        large = a;
        else
        large = c;
    }
    else if(b>c)
    large = b;
    else
    large = c;
}
printf("The largest number is %d", large);
return 0;
}