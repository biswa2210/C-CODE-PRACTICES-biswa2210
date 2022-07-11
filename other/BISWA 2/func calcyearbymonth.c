#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcyearbymonth();
void main()
{
system("mode 1000");
system("color a");
calcyearbymonth();
getch();
}
void calcyearbymonth()
{
	int m,x,y;
printf("Months=");
scanf("%d",&m);
y=m/12;
x=m%12;
printf("%dMonths=%dyeas\n\t%dmonths",m,y,x);
}


