#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='A';
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",x);
x++;
}
printf("\n");
x='A';
}
getch();
}
