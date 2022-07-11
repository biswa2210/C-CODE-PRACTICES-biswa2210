#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{
char ch;
for(;;)
{
ch=getc(stdin);
if(ch=='.')
break;
if(isprint(ch))
printf("\n\n%c is printable");
}
getch();
}
