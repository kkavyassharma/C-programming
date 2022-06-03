//17 WAP to demonstrate the use of switch statement without the break statement.
#include<stdio.h>
int main(){
int option = 1;
switch(option)
{
    case 1: printf("\n In case 1");
    case 2: printf("\n In case 2");
    default: printf("\n In case default");
}
return 0;
}