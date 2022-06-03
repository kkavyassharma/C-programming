//39 WAP to print the following pattern.
//     1
//    12
//   123
//  1234
// 12345
#include<stdio.h>
int main(){
int i, j, k;
for (i = 1; i <= 5; i++)
{
   printf("\n");
   for(k=5; k>=i; k--)
   printf(" ");
   for(j=1; j<=i; j++)
   printf("%d", j);
}

return 0;
}