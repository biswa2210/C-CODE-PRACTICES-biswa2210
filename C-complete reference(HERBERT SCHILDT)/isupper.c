/*isupper*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char ch;
for(;;)
{
ch=getc(stdin);
if(isupper(ch))
{
printf("\n\n%c is a upper character",ch);
}
if(ch=='.')
{
break;
}
}
getch();
}
