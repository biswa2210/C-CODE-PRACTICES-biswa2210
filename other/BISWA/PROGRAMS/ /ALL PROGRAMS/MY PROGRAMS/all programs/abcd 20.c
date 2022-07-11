#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='A';
for(i=(x);i<=(x+3);i++)
{
for(j=i;j>=x;j--)
{
printf("%c",j);
}
printf("\n");
}
getch();
}

