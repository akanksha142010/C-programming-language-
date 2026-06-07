#include<stdio.h>
int main()
{
  int i,j,k,height1,height2,width;
printf("Enter height of top triangle = ");
scanf("%d",&height1);
printf("Enter height of bottom triangle = ");
scanf("%d",&height2);
printf("Enter tree width reference = ");
scanf("%d",&width);

//triangle 1: top smalller pyramid
for(i=1; i<=height1; i++)
{
for(j=1; j<=width-i; j++)
  {
printf(" ");
}
}
for(k=1; k<=2*i-1; k++)
{
printf("*");
}
printf("\n");
//triangle 2: bottom bigger pyramid
for(i=1; i<=height2; i++)
{
for(j=1; j<=width-i; j++0
  {
  printf(" ");
}
for(k=1; k<=2*i-1; k++)
{
printf("*");
}
printf("\n");
}
//trunk: 2 rows centered
for(i=1; i<=2; i++)
{
for(j=1; j<=width; j++)
  printf(" ");
}
printf("\n");
}
return 0;
}
fo
