/*isxdigit*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char ch;
for(;;)
{
ch=getc(stdin);
if(isxdigit(ch))
{
printf("\n\n%c is a hexadecimal  character",ch);
}
if(ch=='.')
{
break;
}
}
getch();
}
