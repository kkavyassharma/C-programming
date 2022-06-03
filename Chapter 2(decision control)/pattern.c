#include<stdio.h>
int main(){
int n, i, j, k, size;
printf("Enter a number:");
scanf("%d", &n);
size = (2*n - 1);
for(i=1; i<=n; i++)
{
    for(j=1; j<=size; j++){
    printf("%d", n);
    for(k=1; k<2; k++){
        printf(" ");
    }
    printf("\n");
}
return 0;
}