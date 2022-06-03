//35 WAP to print 
//1
//1 2 
//1 2 3 
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main(){
int i, j;
for(i=1; i<=5; i++)
{
    printf("\n");
    for(j=1; j<=i; j++)
    printf(" %d ", j);
}
return 0;
}