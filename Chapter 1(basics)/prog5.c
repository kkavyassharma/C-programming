 //5 WAP to calculate the distance between two points
#include<stdio.h>
#include<math.h>
int main(){
int x1, x2, y1, y2; 
float Distance;
printf("Enter the coordinates of the points :");
scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
Distance = sqrt(pow((x2-x1), 2)+pow((y2-y1),2));
printf("\n Distance between two points is %f", Distance);
return 0;
}