#include<stdio.h>
#include<conio.h>
int main()
{
float principle, rate, time, SI;
printf("enter principle amount:");
scanf ("%f",&principle);
printf("enter rate:");
scanf("%f",&rate);
printf("enter time:");
scanf("%f",&time);
SI = (principle * rate * time)/100;
printf("SIMPLE INTEREST = %f",SI);
getch();
}