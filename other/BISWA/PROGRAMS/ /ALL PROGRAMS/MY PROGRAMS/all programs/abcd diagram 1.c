#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,x='A';
printf("ENTER THE NUMBER OF LINES=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=4;j++)
{
printf("%c  ",x);
x++;
       }
 printf("\n");
 x='A';
 }

getch();
}

