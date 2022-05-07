//27 WAP to convert a integer number into the corresponding floating point number.
#include<stdio.h>
int main(){
float f_num;
int i_num;
printf("Enter a integer number:");
scanf("%d", &i_num);
f_num = (float) i_num;
printf("The corresponding floating point number for the integer is %f", f_num);
return 0;
}