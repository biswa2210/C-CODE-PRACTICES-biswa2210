#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcareaanddiameterofcircle();
void main()
{
system("mode 1000");
system("color a");
calcareaanddiameterofcircle();
getch();
}
void calcareaanddiameterofcircle()
{
float pi=3.14,r,ar,di;
printf("enter radious of the circle=");
scanf("%f",&r);
di=2*r;
ar=pi*r*r;
printf("diameter of this circle=%.2f\n",di);
printf("area of this circle=%.2f",ar);
}

