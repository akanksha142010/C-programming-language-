#include<stdio.h>
int main()
{
  int i,j,k,nor,noc;
printf("Enter the value for row =");
scanf("%d", &nor);
printf("Enter the value for column =");
scanf("%d", &noc);
for(i=1; i<=nor; i++)
{
for(j=1; j<=noc-i; j++)
  printf(" ");
{
for(k=1; k<=(2*i-1); k++)
  printf("%c",i+96);
printf("\n");
}
}
return 0;
}
