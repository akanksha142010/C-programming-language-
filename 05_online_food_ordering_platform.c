#include<stdio.h>
int main()
{
  int choice,total = 0;
char cont;
printf("***Online Food Ordering Platform***\n\n");
do
{
printf("------MENU------\n");
printf("1.Pizza - Rs.299\n");
printf("2.Burger - Rs.149\n");
printf("3.Sandwich - Rs.80\n");
printf("4.Coke - Rs.60\n");
printf("5.Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
total += 299;
printf("Pizza added. Current total: Rs.%d\n", total);
break;

case 2:
total +=149;
printf("Burger added. Current total: Rs.%d\n",total);
break;

case 3:
total += 80;
printf("Sandwich added. Current total: Rs.%d\n";, total);
break;

case 4:
total += 60;
printf("Coke added. Current total: rs.%d\n", total);
break;

case 5:
printf("Thank you for ordering:\n");
break;

default:
  printf("Invalid choice. Please enter 1-5.\n");
}
if(choice! = 4)
{
printf("Do you want to order more ? y\n:);
scanf("%c",&cont);
}
else
{
cont = 'n';
}
}
  while (cont == 'y'|| cont == 'y');
printf("\n***Final Bill***\n");
printf("Total Amount = Rs.%d\n", total);
printf("Visit Again\n");

return 0;
}
"Total Amount("%c", &cibre
