#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int f=0,s=1,i,n,ans,p;
	printf("Enter the no of terms=");
	scanf("%d",&n);
	printf("\n\nthe fibonacci series is_____\n\n\n");
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		{
			ans=i;
		}
		else 
		{
			ans=f+s;
			f=s;
			s=ans;
		}
		printf(" %d ",ans);
	}
	getch();
}
