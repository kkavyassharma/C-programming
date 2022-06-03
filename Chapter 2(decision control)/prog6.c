//6D WAP to to enter a character and then determine whether it is a vowel or not.
#include<stdio.h>
#include<conio.h>
int main(){
char ch;
printf("Enter a character:");
scanf("%c", &ch);
{
if(ch=="a" ||ch=="e" ||ch=="i" ||ch=="o" ||ch=="u" ||ch=="A" ||ch=="E" ||ch=="I" ||ch=="O" ||ch=="U")
printf("\n The character entered is a vowel");
else
printf("\n The character entered is not a vowel");
}
return 0;
}