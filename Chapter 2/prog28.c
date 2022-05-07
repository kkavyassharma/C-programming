//28 WAP using do-while loop to display the square and cube of first n numbers.
#include<stdio.h>
int main(){
int i=0, n, square = 0, cube = 0;
printf("Enter the value of n:");
scanf("%d", &n);
do
{
    square = i*i;
    cube = i*i*i;
    printf("\n Number = %d \t | \t Square = %d \t | \t Cube = %d",i, square, cube);
    i++;
} while (i<=n);


return 0;
}