//WAP to calculate exp(x,y) using recursive functions.
#include<stdio.h>
int exp_rec(int, int);
int main(){
int num1, num2, res;
printf("\n Enter the two numbers:");
scanf("%d%d", &num1, &num2);
res = exp_rec(num1, num2);
printf("\n Result = %d", res);
return 0;
}
int exp_rec(int x, int y){
    if(y==0)
    return 1;
    else
    return (x * exp_rec(x, y-1));
}