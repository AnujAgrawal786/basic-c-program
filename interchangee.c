#include<stdio.h>
#include<conio.h>
int main()
{
int a , b;
printf("enter value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
a = a + b;
b = a-b;
printf("%d",b);
getch();
}