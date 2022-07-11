#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{
char ch;
for(;;)
{
ch=getchar();
if(ispunct(ch))
{
printf("\n\n%c is punctuation number \n",ch);
}
if(ch=='.')
{
break;
}
}
getch();
}
