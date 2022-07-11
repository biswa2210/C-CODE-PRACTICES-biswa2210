#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char X='A';
for(i=X;i<=(X+3);i++)
{
for(j=i;j<=X;j--)
{
printf("%c",j);
}
printf("\n");
}
getch();
}
