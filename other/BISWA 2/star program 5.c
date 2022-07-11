#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=1;i<=5;i++)
{
for(s=i;s<=4;s++)
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

