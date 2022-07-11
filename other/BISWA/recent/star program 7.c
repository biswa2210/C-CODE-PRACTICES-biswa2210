#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s,n;
printf("enter the no of line=");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(s=(n-1);s>=i;s--)
{
printf(" ");
}
for(j=1;j<(2*i);j++)
{
printf("*");
}
printf("\n");
}
getch();
}

