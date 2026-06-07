#include<stdio.h>
int main()
{
printf("Enter the value for row = ");
scanf("%d",&nor);
printf("Enter the value for column = ");
scanf("%d",&noc);
for(i=1; i<=nor; i++)
{
for(j=1; j<=noc-i; j++)
  printf(" ");
for(k=1; k<=2*i-1; k++)
  printf("*");
for(j=1; j<=noc-i; j++)
  printf("\n");
}
return 0;
}
