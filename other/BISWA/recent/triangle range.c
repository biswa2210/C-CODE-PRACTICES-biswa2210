#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k=1;
	printf("Enter the NUMBER OF LINES=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf("%d ",k);
		k++;
	}
	printf("\n");
		
	}
	getch();
}
