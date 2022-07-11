/*islower*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char ch;
for(;;)
{
ch=getc(stdin);
if(islower(ch))
{
printf("\n\n%c is a lower character",ch);
}
if(ch=='.')
{
break;
}
}
getch();
}
