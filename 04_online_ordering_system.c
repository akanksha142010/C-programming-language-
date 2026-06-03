#include<stdio.h>
int main()
{
printf("-----------Online Ordering Platform--------\n");
char name[25], prod[25];
float cgst, sgst, price, qty, tot, dis, dis_bill, tax_bill;

printf("Enter name: ");
scanf("%d", &name);

printf("Product name: ");
scanf("%d", &prod);

printf("Enter Quantity: ");
scanf("%d", &qty);

printf("Enter price: ");
scanf("%d", &price);

tot = price*qty;
cgst = tot*0.09;
sgst = tot*0.09;
printf("Total Price: %f\n", tot);
printf("SGST = %f\n", sgst);
printf("CGST = %f\n", cgst);

tax_bill = tot + sgst + cgst;
printf("Taxable Amount: %f\n", tax_bill);

if(tax_bill>=5000)
{
dis = 0.05*tax_bill;
dis_bill = tax_bill-dis;
printf("5% discount given\n");
printf("Final bill = %f\n", dis_bill);
}

else if(tax_bill>=3000 && tax_bill<5000)
{
dis = 0.03*tax_bill;
dis_bill = tax_bill-dis;
printf("3% discount given\n");
printf("Final bill = %f\n", dis_bill);
}

else if(tax_bill>=1000 && tax_bill<3000)
{
dis = 0.01*tax_bill;
dis_bill = tax_bill-dis;
printf("1% discount given\n");
printf("Final bill = %f\n", dis_bill);
}

else 
{
printf("No Discount");
}
  return 0;
}


