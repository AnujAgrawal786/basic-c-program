#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c ,d;
a = 2367;
//first value of four digit
b = a/1000;
//last value of four digit
c = a%10;
d = b+c ;
printf("sum of first and last digit: %d",d);
getch();
}