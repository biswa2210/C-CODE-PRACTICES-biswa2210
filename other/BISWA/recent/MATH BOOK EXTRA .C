#include<stdio.h>
#include<conio.h>
int main()
{
int i,a=1,n,h;
printf("Enter the range=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	printf("1/(%d*%d)+",a,i);
	a++;	
}
h=n+1;
printf("=%d/%d",n,h);
getch();
}

