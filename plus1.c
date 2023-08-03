#include <stdio.h>
#include <conio.h>
int main()
{
int a ,b ,c ,d ,e ,f ,g;
printf("enter the five digit value:");
scanf("%d",&a);
//first digit
b = a/10000;
//second digit
c = (a/1000)%d;
//third digit
d = (a/100)%10;
//fourth digit;
e = (a/10)%10;
//fivth digit;
f = a%10;
b = (b+1)%10;
c = (c+1)%10;
d = (d+1)%10;
e = (e+1)%10;
f = (f+1)%10;
g = b*10000 + c*1000 + d*100 + e*10 + f;
printf("answer:%d",g);
}