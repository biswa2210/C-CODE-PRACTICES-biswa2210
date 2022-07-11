#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void series4();//declaration part
void main()
{
	system("title BISWA");
system("mode 1000");
system("color a");
series4();//calling part 
getch();
}
void series4()//definition part
{

	int b=0,n,i,h;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		h=i*i*i;
		b=b+h;
		printf(" %d+",h);
	}
	printf("=%d",b);
}


