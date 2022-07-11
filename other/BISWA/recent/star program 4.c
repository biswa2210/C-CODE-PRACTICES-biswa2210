#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=4;i>=1;i--)
{
for(s=i;s<=3;s++)
{
	printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}

