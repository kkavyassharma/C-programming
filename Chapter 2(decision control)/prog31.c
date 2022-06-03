
 //31 WAP to read the numbers until -1 is encountered. Also calculate the sum and mean of all positive numbers entered and the sum and mean of all negative numbers entered seperately.
#include<stdio.h>
int main(){
int num, sum_pos = 0, sum_neg = 0, positives = 0, negatives = 0;
float mean_pos = 0.0, mean_neg = 0.0;
printf("Enter any number and enter -1 to exit:");
scanf("%d", &num);
do
{
    if(num>0)
    {
    sum_pos = sum_pos + num;
    positives++;
    }
    else if(num<0)
    {
    sum_neg = sum_neg + num;
    negatives++;
    }
    
    printf("\n Enter any number and enter -1 to exit:");
    scanf("%d", &num);
}while(num != -1);
mean_pos = (float)sum_pos/positives;
mean_neg = (float) sum_neg/negatives;
printf("\n The Sum of all Positive numbers is %d", sum_pos);
printf("\n The Sum of all Negative numbers is %d", sum_neg);
printf("\n The Mean of all Positive numbers is %f", mean_pos);
printf("\n The Mean of all Negative numbers is %f", mean_neg);
return 0;
}