#include<stdio.h>
int main()
{
  printf("********RESULTS*********\n");
  float hin,mar,eng,tot,pr;
  hin = 75; 
  mar = 72;
  eng = 78;
  tot = eng + mar + hin;
  pr = 100*tot/240;

  printf("SUBJECTS\n");
  printf("Hindi = 75\n");
  printf("Marathi = 72\n");
  printf("English = 78\n");
  printf("Total = %d\n",tot);
  printf("Percentage = %d\n", pr);
  return 0;
}
