//26 WAP to calculate the average of numbers entered by the user.
#include<stdio.h>
int main(){
int num , count = 0, sum=0;
float avg;
printf(" Enter -1 to exit.....");
printf("\n Enter any number:");
scanf("%d", &num);
while(num != -1)
{
    count++;
    sum = sum + num;
    printf("\n Enter any number:");
    scanf("%d", &num);
}
avg =(float) sum/count;
printf("The average of the numbers entered is %.2f", avg);
return 0;
}