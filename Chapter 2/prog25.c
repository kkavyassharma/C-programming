//25 WAP to read the numbers until -1 is encountered. also count the negative, positive, and zeroes entered by user.
#include<stdio.h>
int main(){
int num, positives = 0, negatives = 0, zeroes = 0;
printf("Enter -1 to exit....");
printf("\n Enter any number:");
scanf("%d", &num);
while(num != -1)
{
    if(num>0)
    positives++;
    else if(num<0)
    negatives++;
    else
    zeroes++;
    printf("Enter any number:");
    scanf("%d", &num);
}
printf("\n Number of Positive numbers entered is %d", positives);
printf("\n Number of Negative numbers entered is %d", negatives);
printf("\n Number of zeroes entered is %d", zeroes);
return 0;
}