//calcday;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcday(int,int);//declaration part
void main()
{
	system("title BISWA");
system("mode 1000");
system("color a");
int y,d;
printf("Enter the number of years=");
scanf("%d",&y);
Sleep(3000);
calcday(y,d);//calling part 
getch();
}
void calcday(int y,int d)//definition part
{
d=y*365;
printf("%dyear=%ddays",y,d);
}
