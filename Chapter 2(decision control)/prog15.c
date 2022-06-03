//15 WAP to enter the marks of a student in four subjects. Then calculate the total, aggregate, and display the grades obtained by the student.
#include<stdio.h>
int main(){
float total, avg, marks1, marks2, marks3, marks4;
printf("Enter the marks obtained in Science:");
scanf("%f", &marks1);
printf("\n Enter the marks obtained in Maths:");
scanf("%f", &marks2);
printf("\n Enter the marks obtained in social science:");
scanf("%f", &marks3);
printf("\n Enter the marks obtained in English:");
scanf("%f", &marks4);
total = marks1 + marks2 + marks3 + marks4;
avg = total/4;
printf("\n Total = %f", total);
printf("\n Aggregate = %f",avg);
{
    if(avg >= 75)
    printf("\n DISTINCTION");
    else if(avg >= 60 && avg < 75)
    printf("\n FIRST DIVISION");
    else if(avg >= 50 && avg < 60)
    printf("\n SECOND DIVISION");
    else if(avg >= 40 && avg < 50)
    printf("\n THIRD DIVISION");
    else
    printf("\n FAIL");
}
return 0;
}