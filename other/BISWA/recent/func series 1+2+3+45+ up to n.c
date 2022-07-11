#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series1();//declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
series1();//calling part 
getch();
}
void series1()//definition part
{
int a=0,i,n;
printf("enter the range=");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	a=a+i;
	printf("%d+",i);
}
printf("=%d",a);
}

