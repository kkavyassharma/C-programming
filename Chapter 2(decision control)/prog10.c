//10 A company decides to give bonus to all its employees on Diwali. 5% bonus = male workers, 10% bonus = female workers, and if salary < 10000 then extra two percent bonus.WAP to calculate the bonus and display salary of the employee.
#include<stdio.h>
int main(){
float salary, bonus, total;
char ch;
printf("\n Enter sex of employee:");
scanf("%c", &ch);
printf("\n Enter salary of employee:");
scanf("%f", &salary);
{
    if(ch=='m')
    bonus = 0.05 * salary;
    else 
    bonus = 0.10 * salary;
    if(salary<10000)
    bonus += 0.02 * salary;
}
total = salary + bonus;
printf("\n Salary = %f", salary);
printf("\n Bonus = %f", bonus);
printf("\n Total amount to be paid = %f", total);
return 0;
}