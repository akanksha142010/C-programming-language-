#include<stdio.h>
int main()
{
  int i,j,row,col;
printf("Enter the value for row = ");
scanf("%d",&row);
printf("Enter the value for column = ");
scanf("%d",&col);

for(i=97; i<=row+96; i++)
{
for(j=97; j<=col+96; j++)
  printf("%c\t",j);
printf("\n");
}
return 0;
}
