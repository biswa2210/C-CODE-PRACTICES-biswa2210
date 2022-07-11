#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
Beep(126,5000);
system("mode 1000");
system("color a");
int r;
char a[20],*p;
r=strlen(a);
printf("enter your name=");
gets(a);
p=&a[r+1];
for(;*p!=0;p--)
{
	printf("%c",*p);
}
getch();
}

