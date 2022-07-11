#include<stdio.h>
#include<conio.h>
void main()
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
getch();
}

