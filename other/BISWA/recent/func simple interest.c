#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcsimpleinterest();
void main()
{
system("mode 1000");
system("color a");
calcsimpleinterest();
getch();
} 
void calcsimpleinterest()
{
float p,r,t,w;
printf("enter the principal=");
scanf("%f",&p);
printf("enter the rate of interest=");
scanf("%f",&r);
printf("enter the time period of interest=");
scanf("%f",&t);
w=(p*r*t)/100;
printf("simple interest=%.2f",w);
}


