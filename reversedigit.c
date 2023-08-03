#include<stdio.h>
#include<conio.h>
int main()
{
int a ,b ,c ,d ,e ,reverse;
a = 1234;
// first digit
b = a/1000;
// second digit
c = (a/100)%10;
// third digit
d = (a/10)%10;
// four digit
e = a%10;
reverse = e*1000 + d*100 + c*10 + b;
printf("%d",reverse);
getch();
}