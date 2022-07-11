#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0,f;
printf("Enter the range=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	a=a+i;
	printf("(1-1/%d)*",i);
}
f=n+1;
printf("=1/%d",f);
getch();
}

