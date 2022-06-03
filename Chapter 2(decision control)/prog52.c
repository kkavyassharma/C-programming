//52 WAP to enter a decimal number. Calculate and display binary equivalent of this number.
#include<stdio.h>
#include<math.h>
int main(){
int num, temp, bin_num = 0, i=0;
printf("Enter any number:");
scanf("%d", &num); 
while(num != 0)
    {
        temp = num % 2;
        bin_num += temp * pow(10, i);
        num = num/2;
        i++;
    }
    printf("The binary equivalent of the number is:%d", bin_num);
return 0;
}