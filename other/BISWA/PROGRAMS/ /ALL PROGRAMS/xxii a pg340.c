#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
printf("Enter the range=");
scanf("%d",&n);
for(i=2;i<=n;i=i+3)
{
	s=i+s;
	printf("%d+",i);
	
}
printf("=%d",s);
getch();
}

