#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,s;
for(i=1;i<=4;i++)
{
for(s=3;s>=i;s--)
{
	printf("-");
       }
       for(j=1;j<=i;j++)
{
	printf("* ");
       }
 printf("\n");
 
}
getch();
}

