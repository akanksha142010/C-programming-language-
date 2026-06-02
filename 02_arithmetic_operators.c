#include<stdio.h>

//Program to demonstrate arithmetic operators in C
//Author: Akanksha Ganesh Prasad
int main()
{
printf("***Arithmetic Operations***");
int a,b,c,x,y,z;
a = 6;
b = 3;
c = a + b; //addition
x = a/b; //division - gives quotient only for integers
y = a*b; //Multiplication
z = a-b; //Subtraction
printf("a=6\n");
printf("b=3\n");
printf("c = a + b = %d\n", c);
printf("x = a/b = %d\n", x);
printf("y = a*b = %d\n", y);
printf("z = a-b = %d\n", z);
return 0;
}
