#include<stdio.h>

struct Employee
{
char name[40];
int salary;
char dept[40];
char position[30];
}

int main()
{
struct Employee emp; //create variable

printf("Enter name = ");
scanf("%[^\n]s", emp.name); //reads full name with space

printf)("Enter Salary = ");
scanf("%d",emp.sal);

printf("Enter department = ");
scanf("%d",emp.dept);

printf("Enter Position = ");
scanf("%[^\n]s", emp.position);

  
if(sal>=10000)
printf("High Position Officer\n");
else
printf("Low Position Officer\n");

printf("------------------------EMPLOYEE RECORD---------------------------\n");
printf("Name = %s\n", emp.name);
printf("Department = %s\n", &department");
printf("Salary = %d\n", emp.sal);
printf("Position = %s\n",emp.position);
return 0;
}
