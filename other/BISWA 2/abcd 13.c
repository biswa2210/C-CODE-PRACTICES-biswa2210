#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='D';
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
	printf("%c",x);
x--;	
}
printf("\n");
x='D';
}
getch();
}

