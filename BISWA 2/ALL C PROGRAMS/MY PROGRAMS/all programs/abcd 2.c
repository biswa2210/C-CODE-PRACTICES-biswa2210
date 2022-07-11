#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s;
char x='A';
for(i=4;i>=1;i--)
{
/*for(s=1;s<i;s++)
{
	printf(" ");
}*/
for(j=1;j<=i;j++)
{
printf("%c",x);
}
printf("\n");
x++;
}
getch();
}

