#include<stdio.h>
int main()
{
  int i,j,k,nor,noc;
printf("Enter the value for row = ");
scanf("%d", &nor);
printf("Enter the value for column = ");
scanf("%d",&noc);
for(i=1; i<=nor; i++)
{
for(j=1; j<=noc; j++)
  if(i==1||j==1||i==nor||j==noc)
    printf("*");
else
    printf(" ");
printf("\n");
}
return 0;
}
