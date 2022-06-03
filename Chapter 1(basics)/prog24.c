//24 WAP to calculate the total amount of money in the piggybank, given the coins of Rs 10, Rs 5, Rs 2, Rs1.
#include<stdio.h>
int main(){
int ten_coins, five_coins, two_coins, one_coins, total;
printf("\n Enter the number of ten rupee coins:");
scanf("%d", &ten_coins);
printf("\n Enter the number of five rupee coins:");
scanf("%d", &five_coins);
printf("\n Enter the number of two rupee coins:");
scanf("%d", &two_coins);
printf("\n Enter the number of one rupee coins:");
scanf("%d", &one_coins);
total = (ten_coins * 10 + five_coins * 5 + two_coins * 2 + one_coins * 1);
printf("\n Total money in the piggybank is %d", total);
return 0;
}