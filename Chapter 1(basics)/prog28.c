//28D WAP to calculate a student's result based on two examinations, one sports event, and three activities conducted. The weightage of activities = 30%, sports = 20%, and examination = 50%.
#include<stdio.h>
#define ACTIVITIES_WEIGHTAGE 30
#define SPORTS_WEIGHTAGE 20
#define EXAMS_WEIGHTAGE 50
#define EXAMS_TOTAL 200
#define ACTIVITIES_TOTAL 60
#define SPORTS_TOTAL 50
int main(){
int exam_score1, exam_score2, act_score1, 
act_score2, act_score3, sports_score;
float exam_total, activities_total, exam_percent,
activities_percent, sports_percent, total_percent;
printf("\n Enter the score of two exams (out of 100):");
scanf("%d %d", &exam_score1, &exam_score2);
printf("\n Enter the score of three activities(out of 20):");
scanf("%d %d %d", &act_score1, &act_score2, &act_score3);
printf("\n Enter the score of sports event(out of 50):");
scanf("%d", &sports_score);
exam_total = (int) (exam_score1 + exam_score2);
activities_total = (int) (act_score1 + act_score2 + act_score3);
exam_percent = (float) exam_total*EXAMS_WEIGHTAGE/EXAMS_TOTAL;
activities_percent = (float) activities_total*ACTIVITIES_WEIGHTAGE/ACTIVITIES_TOTAL;
sports_percent = (float) sports_score*SPORTS_WEIGHTAGE/SPORTS_TOTAL;
total_percent = (float) (exam_percent+activities_percent+sports_percent);
printf("\n *******************RESULT*****************");

printf("\n Percentage scored in exams = %f", exam_percent);
printf("\n Percentage scored in activities = %f", activities_percent);
printf("\n Percentage scored in sports = %f", sports_percent);
printf("\n Final overall percentage = %f", total_percent);
return 0;
}