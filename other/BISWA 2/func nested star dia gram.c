#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void nestsdstardiagram();//declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
nestsdstardiagram();//calling part
getch();
}
void nestsdstardiagram()//definition part
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
if(i!=j)
printf("*");
else
printf("=");
}
printf("\n");
}
}

