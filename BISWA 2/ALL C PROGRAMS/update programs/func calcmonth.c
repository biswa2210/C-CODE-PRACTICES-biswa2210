//calcmonth;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcmonth();//declaration part
void main()
{
system("mode 1000");
system("color a");
calcmonth();//calling part
getch();
}
void calcmonth()//definition part
{
	int y,m,x;
printf("year=");
scanf("%d",&y);
m=(y*12);
printf("%dyear=%dmonths",y,m);
}

