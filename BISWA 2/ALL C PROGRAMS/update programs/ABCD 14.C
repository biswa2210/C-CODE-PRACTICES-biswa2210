#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,s;
char x='D';
for(i=4;i>=1;i--)
{
for(j=1;j<=i;j++)
{
	printf("%c",x);
x--;
}
printf("\n");
x='D';
}
getch();
}
