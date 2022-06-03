//54 WAP to enter a decimal number. Calculate and display the hexadecimal equivalent of this number.
#include<stdio.h>
#include<math.h>
int main(){
int num, temp, hex_num = 0, i=0;
printf("Enter any number:");
scanf("%d", &num); 
while(num != 0)
    {
        temp = num % 16;
        hex_num += temp * pow(10, i);
        num = num/16;
        i++;
    }
    printf("The hexadecimal equivalent of the number is:%d", hex_num);
return 0;
}