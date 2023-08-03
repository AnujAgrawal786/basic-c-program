#include <stdio.h>
#include <conio.h>
int main()
{
float length , width , radius ;
float arearectangle , areacircle ;
printf("enter rectangle length:");
scanf("%f",&length);
printf("enter rectangle width:");
scanf("%f",&width);
arearectangle = length * width ;
printf("area of rectangle = %f",arearectangle);
printf("\nenter circle radius:");
scanf("%f",&radius);
areacircle = 3.14 * radius * radius;
printf("%f",areacircle);
getch();
}