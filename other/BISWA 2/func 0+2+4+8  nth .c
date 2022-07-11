#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series6();//declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
series6();//calling part
getch();
}
void series6()//definition part
{

	int b=0,n,i;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;(i++)*(i++))
	{
		b=b+i;
		printf(" %d+",i);
	}
	printf("=%d(THE ADDITION OF ALL EVEN NUMBERS)",b);
}


