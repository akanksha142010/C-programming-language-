#include<stdio.h>
int main()
{
  int i,num,limit;
printf("*******MULTIPLICATION TABLE*******\n");
printf("Enter the number for table: ");
scanf("%d",&num);
printf("Enter how many multiples you want: ");
scanf("%d",&limit);
printf("\n----Table of %d---\n", num);
for(i=1; i<=limit; i++)
{
printf("%d * %d = %d\n", num,i,num*i);
}
printf("------------------------\n");
return 0;
}
