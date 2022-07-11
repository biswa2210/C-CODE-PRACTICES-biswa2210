#include<stdio.h>
#include<conio.h>
void main()
{
	int b=0,n,i,h;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	h=i*i;
	b=b+h;
	printf(" %d+",h);
	}
	printf("=%d",b);
getch();
}

