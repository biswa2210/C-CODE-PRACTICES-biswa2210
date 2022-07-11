//calcyear;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcyear();//declaration
void main()
{
system("mode 1000");
system("color a");
calcyear();//calling
getch();
}
void calcyear()//difinition
{
int d,p,y;
printf("Enter the number of days=");
scanf("%d",&y);
d=y/365;
p=y%365;
printf("Requered the no of years=%d\n",d);
printf("Requered the no of days=%d\n",p);
}


