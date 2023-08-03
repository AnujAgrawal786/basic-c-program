#include<stdio.h>
#include<conio.h>
int main()
{
int c ,d ,temp;
printf("enter c value:");
scanf("%d",&c);
printf("enter d value:");
scanf("%d",&d);
temp = c ;
c = d ;
d = temp;
printf("%d\n",c);
printf("%d",d); 
getch();
}