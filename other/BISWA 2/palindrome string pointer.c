#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
system("mode 1000");
system("color a");
int r,flag=1;
char a[200],*p,*k;
printf("enter your string=");
gets(a);
r=strlen(a);
p=&a[0];
k=&a[r-1];
for(;p<=k;p++,k--)
{
	if(*p!=*k)
	{
	flag=2;
	break;	
	}

}
if(flag==2)
printf("it is not a palindrome string");
else if(flag==1)
printf("it is  palindrome string");
getch();
}

