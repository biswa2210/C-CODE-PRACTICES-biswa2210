#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[100],n,i,c,sum=0;
	printf("HOW MANY NUMBERS ARE BE INPUTED=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no=");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum of this array=%d",sum);
	getch();
}
