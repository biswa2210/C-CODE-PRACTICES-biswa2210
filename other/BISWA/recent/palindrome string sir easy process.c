#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int len,i,j,i1,f=0;
	printf("enter the string=");
	gets(a);
	for(i1=0;i1!='\0';i1++)
	{
		len++;
	}
	printf("enter the string length=");
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("palindrome string");
	else
	printf("not palindrome string");
	getch();
}
