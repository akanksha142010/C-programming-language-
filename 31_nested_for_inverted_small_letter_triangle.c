#include<stdio.h>
int main()
{
  int i,j,nor,noc;
printf("Enter the row number = ");
scanf("%d",&nor);
printf("Enter the column number = ");
scanf("%d",&noc);
for(i=1; i<=nor; i++)
{
for(j=1; j<=(noc-i); j++)
  printf("%c",i+96);
printf("\n");
}
return 0;
}
