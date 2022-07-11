#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='A';
for(i=(x+3);i>=x;i--)
{
for(j=(x+3);j>=i;j--)
{

printf("%c",j);
}
printf("\n");
}
getch();
}

