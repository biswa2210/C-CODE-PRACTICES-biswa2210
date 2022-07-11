#include<stdio.h>
#include<conio.h>
int main()
{
	int i,f=0,n;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=4;i<=n;i=(i*10)+4)
	{
	f=f+i;
	printf("%d+",i);
	}
printf("=%d",f);
getch();
}

