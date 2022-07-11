#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
for(i=3;i>=1;i--)
{
for(s=2;s>=i;s--)
{
printf(" ");
}
for(j=1;j<(2*i);j++)
{
printf("*");
}
printf("\n");
}
getch();
}

