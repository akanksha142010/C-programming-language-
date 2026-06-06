#include<stdio.h>
int main()
{
  int i,j,row,col;
printf("Enter the value for row = ");
scanf("%d",&row);
printf("Enter the value for column = ");
scanf("%d",&col);

for(i=1; i<=row; i++)
{
for(j=1; j<=col; j++)
  printf("*",j);
printf("\n");
}
return 0;
}
