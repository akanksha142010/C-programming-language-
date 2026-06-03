#include<stdio.h>
int main()
{
printf("SALARY SLIP\n");
char name[25];
//bsal =  basic salary, hra = housing rate allowance, trav = travel allowance, gsal = gross salary, pf = provident fund, ns = net salary
float bsal, hra, trav, gsal, pf, tax, ns;

printf("Name of the employee: ");
scanf("%s",&name);

printf("Enter the basic salary:");
scanf("%f",&bsal);

hra = bsal*0.20;
printf("Housing rate allowance = %f\n", hra);

trav = bsal*0.10;
printf("Travel allowance = %f\n", trav);

gsal = bsal + trav + hra;
printf("Gross Salary = %f\n", gsal);

pf = gsal*0.12;
printf("Provident fund = %f\n", pf);

tax = gsal*0.03; 
printf("Tax = %f\n", tax);

ns = gsal - pf - tax;
printf("Net Salary = %f\n", ns);
return 0;
}

