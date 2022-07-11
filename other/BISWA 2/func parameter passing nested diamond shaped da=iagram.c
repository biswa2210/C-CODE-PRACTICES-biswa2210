#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void nestedstardiamondshapeddiagram(int,int,int);//declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
int i=1,j=1,s=5;
nestedstardiamondshapeddiagram(i,j,s);//calling part
getch();
}
void nestedstardiamondshapeddiagram(int i,int j,int s)//defination part
{
for(i=1;i<=5;i++)
{
for(s=5;s>i;s--)
{
	printf(" ");
}
for(j=1;j<(i*2);j++)
{
printf("*");
}
printf("\n");
}printf(" ");
int a,c,b;
for(a=4;a>=1;a--)
{
for(c=4;c>a;c--)
{
	printf(" ");
}
for(b=1;b<(a*2);b++)
{
printf("*");
}
printf("\n ");
}
}

