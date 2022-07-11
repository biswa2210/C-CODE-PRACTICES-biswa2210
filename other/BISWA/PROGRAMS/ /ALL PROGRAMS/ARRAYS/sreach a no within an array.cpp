#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50000],n,x,f=0,i;
	printf("Enter the RANGE=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER THE NO=");
		scanf("%d",a[i]);
	}
	printf("ENTER THE NUMBER TO BE SEARCH=");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("NO IS FOUND");
	else 
	printf("NO IS NOT FOUND");
	getch();
}
