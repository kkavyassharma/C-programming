//30 WAP to read a character until a * is encountered.Also count the number of uppercase, lowercase, and numbers entered by user.
 #include<stdio.h>
 #include<ctype.h>
 int main(){
 char ch;
 int lowers = 0, upper = 0, numbers = 0;
 printf("\n Enter any character and enter * to exit:");
 scanf("%c", &ch);
 do
 {
     if(ch>='A' && ch<='Z')
     upper++;
     else if(ch>='a' && ch<='z')
     lowers++;
     else if(isdigit(ch)>0)
     numbers++;
     fflush(stdin);
     printf("\n Enter any character and enter * to exit:");
    scanf("%c", &ch);
 }while (ch != '*');
 printf("Number of Uppercase letters entered are: %d",upper);
 printf("Number of Lowercase letters entered are: %d",lowers);
 printf("Number of Numbers entered are: %d",numbers);
 return 0;
 }