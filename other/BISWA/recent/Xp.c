#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='D';
for(i=x;i>=(x-3);i--)
{
for(j=i;j>=(x-3);j--)
{
printf("%c",j);	
x--;
}
printf("\n");
x='D';
}
getch();
}

