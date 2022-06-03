//29 WAP to list all the leap years from 1900 to 2100.
 #include<stdio.h>
 int main(){
 int m=1900 , n=2100;
 do
 {
     
     if((m%4 == 0) && ((m%100 != 0) || (m%400 == 0)))
     {
     printf("\n \t-------Leap Year-------\t");
     printf("\n \t YEAR = %d \t ", m);
     }
     else 
     {
     printf("\n \t-------Not a Leap Year-------\t");
     printf("\n \t YEAR = %d \t ", m);
     }
     m = m +1;
 }while(m<=n);
 return 0;
 }