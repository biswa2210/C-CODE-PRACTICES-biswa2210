#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,s,n;
printf("ENTER  THE  RANGE =");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(s=n;s>=i;s--)
	{
		printf(" ");
	}
for(j=1;j<=i;j++)
{
	printf("%d ",j);
       }
 printf("\n");
 }
getch();
}

