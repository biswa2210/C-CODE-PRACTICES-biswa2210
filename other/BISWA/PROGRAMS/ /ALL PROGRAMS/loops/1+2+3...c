#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,i,n;
	printf("PLZ ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=a+i;
		printf("%d+",i);
	}
	printf("=%d",a);
getch();
}

