#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series3(int,int,int);//declaration part
void main()
{
	system("title BISWA");
system("mode 1000");
system("color a");
	int b=0,n,i;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
series3(b,n,i);//calling part
getch();
}
void series3(int b,int n,int i)//definition part
{


	for(i=1;i<=n;i=(i+2))
	{
		b=b+i;
		printf(" %d+",i);
	}
	printf("=%d(THE ADDITION OF ALL ODD NUMBERS)",b);
}


