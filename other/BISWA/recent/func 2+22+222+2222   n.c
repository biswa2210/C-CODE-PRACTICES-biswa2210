#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series5();//declaration part
void main()
{
	system("title BISWA");
system("mode 1000");
system("color a");
series5();//calling part
getch();
}
void series5()//definition part
{
	int i,f=0,n;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=2;i<=n;i=(i*10)+2)
	{
	f=f+i;
	printf("%d+",i);
	}
printf("=%d",f);
}


