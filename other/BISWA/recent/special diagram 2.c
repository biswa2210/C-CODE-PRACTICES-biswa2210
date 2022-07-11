#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s,n,c=0;
printf("enter the no of lines=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
for(j=n;j>=1;j--)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
getch();
}

