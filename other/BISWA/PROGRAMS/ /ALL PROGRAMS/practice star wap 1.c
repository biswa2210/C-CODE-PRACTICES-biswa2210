#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=1;i<=3;i++)
{
for(s=3;s>i;s--)
{
	printf(" ");
}
for(j=1;j<(i*2);j++)
{
printf("*");
}
printf("\n");
}
getch();
}

