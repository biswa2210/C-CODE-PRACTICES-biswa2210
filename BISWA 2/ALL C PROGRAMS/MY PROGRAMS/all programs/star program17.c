#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=1;i<=5;i++)
{
for(s=5;s>i;s--)
{
	printf(" ");
}
for(j=1;j<(i*2);j++)
{
printf("*");
}
printf("\n");
}printf(" ");
int a,c,b;
for(a=4;a>=1;a--)
{
for(c=4;c>a;c--)
{
	printf(" ");
}
for(b=1;b<(a*2);b++)
{
printf("*");
}
printf("\n ");
}
getch();
}

