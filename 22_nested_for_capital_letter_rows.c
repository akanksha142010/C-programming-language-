#include<stdio.h>
int main()
{
  int i,j,row,col;
printf("Enter the value for row = ");
scanf("%d",&row);
printf("Enter the value for column = ");
scanf("%d",&col);

for(i=65; i<=row+64; i++)
{
for(j=65; j<=col+64; j++)
  printf("%c\t",i);
printf("\n");
}
return 0;
}
