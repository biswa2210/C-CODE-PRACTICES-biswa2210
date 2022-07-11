#include<stdio.h>
#include<conio.h>
int main(void)
{
char ch;
for(;;)
{
ch=getc(stdin);
if(ch=='.')
break;
if(iscntrl(ch))
printf("\n\n%c is a control char \n",ch);
}
return 0;
}
