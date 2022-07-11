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
if(isalnum(ch))
printf("\n\n%c is alphanumeric \n",ch);
}
getch();
}
