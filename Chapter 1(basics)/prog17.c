
//17 WAP to read character in upper case and then print it in lower case.
#include<stdio.h>
int main(){
char ch;
printf("Enter any character in uppercase:");
scanf("%c", &ch);
printf("The character in lowercase is %c", ch+32);
return 0;
}