#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int i,c=0;
	printf("enter the string=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=c;a[i]>=0;i--)
	{
		printf("%c",a[i]);
	}
	getch();
	}
