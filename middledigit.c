#include<stdio.h>
#include<conio.h>
int main()
{
int a ,b ,c ,d ;
a = 1256; 
//first middle value
b = (a/100)%10;
//second middle value
c = (a/10)%10;
//sum of midle first and second digit
d = (b+c);
printf("sum of midle first and second digit:%d",d);

getch();
}