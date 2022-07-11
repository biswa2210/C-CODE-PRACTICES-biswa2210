#include<stdio.h>
#include<conio.h>
void main()
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
getch();
}

