//18 WAP to determine whether an entered character is a vowel or not.
#include<stdio.h>
int main(){
char ch;
printf("Enter any character:");
scanf("%c", &ch);
switch(ch)
{
    case 'a':
    case 'A':
    printf("\n Character entered is a vowel");
    break;
    case 'e':
    case 'E':
    printf("\n Character entered is a vowel");
    break;
    case 'i':
    case 'I':
    printf("\n Character entered is a vowel");
    break;
    case 'o':
    case 'O':
    printf("\n Character entered is a vowel");
    break;
    case 'u':
    case 'U':
    printf("\n Character entered is a vowel");
    break;
    default: printf("\n Character entered is not a vowel");
}
return 0;
}