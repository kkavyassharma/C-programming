//53 WAP to enter a decimal number. Calculate and display the octal equivalent of this number.
#include<stdio.h>
#include<math.h>
int main(){
int num, temp, oct_num = 0, i=0;
printf("Enter any number:");
scanf("%d", &num); 
while(num != 0)
    {
        temp = num % 8;
        oct_num += temp * pow(10, i);
        num = num/8;
        i++;
    }
    printf("The octal equivalent of the number is:%d", oct_num);
return 0;
}