#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series3();//declaration part
void main()
{
	system("title BISWA");
system("mode 1000");
system("color a");
series3();//calling part
getch();
}
void series3()//definition part
{

	int b=0,n,i;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=1;i<=n;i=(i+2))
	{
		b=b+i;
		printf(" %d+",i);
	}
	printf("=%d(THE ADDITION OF ALL ODD NUMBERS)",b);
}


