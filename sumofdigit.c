#include<stdio.h>
#include<conio.h>
int main()
{
int a ,b ,c ,d ,e ,sum ;
a = 1234;
//first digit
b = a/1000;
//second digit
c = (a/100)%10;
//third digit
d = (a/10)%10;
// fourth digit
e = (a%10);
sum = b + c + d + e ;
printf("sum of four digit:%d",sum);
getch();
}


