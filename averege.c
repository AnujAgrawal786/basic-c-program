#include<stdio.h>
#include<conio.h>
int main()
{
  float math ,physics ,chemistry ,hindi ,english ;
  float total , averege,percentege;
  
  printf("enter math marks:");
  scanf("%f",&math);
  printf("enter physics marks:");
  scanf("%f",&physics);
  printf("enter chemistry marks:");
  scanf("%f",&chemistry);
  printf("enter hindi marks:");
  scanf("%f",&hindi);
  printf("enter english marks:");
  scanf("%f",&english);
  total = (math + physics + chemistry + hindi +english);
  averege = total/5.0;
  percentege = (total/500) * 100;
  printf("total marks = %f\n",total);
  printf("averege = %f\n",averege);
  printf("percentege = %f",percentege);
  
  getch();
}
