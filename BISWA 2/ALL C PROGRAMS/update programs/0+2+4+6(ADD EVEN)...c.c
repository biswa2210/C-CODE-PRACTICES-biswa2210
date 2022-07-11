#include<stdio.h>
#include<conio.h>
void main()
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
getch();
}

