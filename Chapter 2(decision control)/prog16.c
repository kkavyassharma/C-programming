//16 WAP to calculate the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
int a, b, c;
float D, deno, root1, root2;
printf("Enter three integers:");
scanf("%d %d %d", &a, &b, &c);
D = (b*b)-(4*a*c);
deno = 2*a;
    if(D>0)
    {
    printf("\n Real Roots");
    root1 = (-b+sqrt(D))/deno;
    root2 = (-b-sqrt(D))/deno;
    printf("ROOT 1 = %f \t ROOT 2 = %f", root1, root2);
    }
    else if(D==0)
    {
    printf("\n equal Roots");
    root1 = (-b+sqrt(D))/deno;
    root2 = (-b-sqrt(D))/deno;
    printf("ROOT 1 = %f \t ROOT 2 = %f", root1, root2);
    }
    else
    {
    printf("IMAGINARY ROOTS");
}
return 0;
}