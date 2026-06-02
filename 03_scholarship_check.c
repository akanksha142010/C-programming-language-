#include<stdio.h>
int main()
{
printf("****RESULTS****\n");
char name[20];
float hin, mar, eng;

printf("Enter your name= ");
scanf("%s",&name);

printf("Enter your hindi marks = ");
scanf("%f",&hin);

printf("Enter your marathi marks = ");
scanf("%f",&mar);

printf("Enter your english marks = ");
scanf("%f",&eng);

//scholarship: all subject's marks 60 or above
if(eng>=60)
printf("SCHOLARSHIP: YES\n");
else
printf("NO SCHOLARSHIP: NO\n");

//Pass or Fail: Fail if any subject is below 35
if(eng>=35 && mar>=35 && eng>=35)
printf("PASS");
else 
printf("FAIL");
re
