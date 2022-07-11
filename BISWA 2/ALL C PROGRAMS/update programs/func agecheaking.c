#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void agecheaking();//declaration
void main()
{
system("mode 1000");
system("color a");
agecheaking();//calling
getch();
}
void agecheaking()//definition
{
int a;
printf("enter the age= ");
scanf("%d",&a);
if(a>=0&&a<=18)
printf("Teenager");
if(a>18&&a<=35)
printf("young age");
if(a>35&&a<=60)
printf("middle age");
if(a>60&&a<=110)
printf("old age");
if(a>110&&a<=10000)
printf("hell");
}

