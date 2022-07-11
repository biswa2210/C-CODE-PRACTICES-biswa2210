#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void addingautopolymorphicnumber();//declaration part
void main()
{
system("mode 1000");
system("color a");
addingautopolymorphicnumber();//calling part
getch();
}
void addingautopolymorphicnumber()//defination part
{
	int a,f=0,n;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		if((a*a)%10==a)
		{
		f=f+a;
		printf("%d+",a);
		}
	}
	printf("=%d",f);
}


