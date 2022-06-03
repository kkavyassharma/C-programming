//32 WAP to print the following pattern.
//Pass 1 - 1 2 3 4 5 
//Pass 1 - 1 2 3 4 5 
//Pass 1 - 1 2 3 4 5 
//Pass 1 - 1 2 3 4 5 
//Pass 1 - 1 2 3 4 5 
#include<stdio.h>
int main(){
int i,j;
for(i=1; i<=5; i++)
{
    printf("\n Pass %d - ", i);
    for(j=1; j<=5; j++)
    printf(" %d ", j);
}
return 0;
}