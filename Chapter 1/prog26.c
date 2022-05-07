//26 WAP to convert a floating point number into the corresponding integer.
#include<stdio.h>
int main(){
float f_num;
int i_num;
printf("Enter a floating point number:");
scanf("%f", &f_num);
i_num = (int) f_num;
printf("The corresponding integer value of the floating point number is %d", i_num);
return 0;
}