#include<stdio.h>
#include<conio.h>
int main()
{
  float fahrenhenit ,centigrade;
  printf("enter tempreture in fahrenhenit:");
  scanf("%f",&fahrenhenit);
  centigrade = (fahrenhenit-32)*5/9;
  printf("centigrade = %f",centigrade);
  getch();
}
