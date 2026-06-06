#include<stdio.h>
int main()
{
  int i,j;
printf("========Nested for loop columns========\n");
for(i=1; i<=5; i++)
{
for(j=1; j<=10; j++)
  printf("%d\t",j);
printf("\n");
}
return 0;
}
