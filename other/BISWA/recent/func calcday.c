//calcday;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcday();//declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
calcday();//calling part 
getch();
}
void calcday()//definition part
{
	int y,d;
printf("Enter the number of years=");
scanf("%d",&y);
d=y*365;
Sleep(3000);
printf("%dyear=%ddays",y,d);
}


