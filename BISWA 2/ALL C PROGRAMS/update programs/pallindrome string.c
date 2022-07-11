#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
char x[1000];
int i,len,j,f=0;
printf("ENTER YOUR NAME=");
gets(x);
len=strlen(x);
for(i=0,j=len-1;i<=j;i++,j--)
{
	if(x[i]!=x[j])
	{
		f=1;
		break;
	}
}
if(f==0)
{
	printf(" %s is pallindrome string",x);
}
else
{
		printf(" %s is not pallindrome string",x);
}
}

