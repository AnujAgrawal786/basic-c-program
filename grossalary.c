#include<stdio.h>
#include<conio.h>
int main()
{
int salary;
int  hra , da , gs;
printf("enter your salary : ");
scanf("%d",&salary);
hra = 0.2 * salary;
da = 0.4 * salary;
gs = salary + hra + da ;
printf("gs = %d",gs);
getch();
}