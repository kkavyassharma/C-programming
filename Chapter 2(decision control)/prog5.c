//5 WAP to enter a character. If the entered character is in lower case then convert it into upper case and if it is a lower case character then convert it into uppercase.
#include<stdio.h>
int main(){
char ch;
printf("Enter any character:");
scanf("%c", &ch);
{
    if(ch>="A" && ch<="Z")
    printf("The character entered is %c and in lowercase it is %c", ch, ch+32); 
    else
    printf("The character entered is %c and in uppercase it is %c", ch, ch-32); 
}
return 0;
}