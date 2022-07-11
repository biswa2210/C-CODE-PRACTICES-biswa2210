#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void dayasperchoice();//declaration
void main()
{
system("mode 1000");
system("color a");
dayasperchoice();//calling
getch();
}
void dayasperchoice()//definition
{
int d;
printf("1=MONDAY\n");
printf("2=TUESDAY\n");
printf("3=WEDNESDAY\n");
printf("4=THUSDAY\n");
printf("5=FRYDAY\n");
printf("6=SATERDAY\n");
printf("7=SUNDAY\n");
printf("ENTER THE DAY\n");
scanf("%d",&d);
if(d==1)
printf("MONDAY");
else if(d==2)
printf("TUESDAY");
else if(d==3)
printf("WEDNESDAY");
else if(d==4)
printf("THUSDAY");
else if(d==5)
printf("FRYDAY");
else if(d==6)
printf("SATERDAY");
else if(d==7)
printf("SUNDAY");
else
printf("not applicable");
}

