#include<stdio.h>
int main()
{
float roll,name,hin,mar,eng,tot,pr;
char{20};
printf("*******STUDENT REPORT CARD*******\n");
printf("Enter your name = ");
scanf("%c",&name);
printf("Enter your roll no: );
scanf("%d",&roll);
printf("Enter marks out of 80:\n");
printf("Enter your hindi marks = ");
scanf("%d",&hin);
printf("Enter your marathi marks = ");  
scanf("%d",&mar);
printf("Enter your english marks = ");
scanf("%d",&eng);
if(hin>80||mar>80||eng>80||hin<0||eng<0||mar<0)
printf("\nError: Marks should be between 0 and 80!\n");
return 1;
tot= eng + mar + hin;
printf("Total = %d" , tot);
pr = 100*tot/240;
printf("Percentage = %d",&pr);
return 0;
  }
