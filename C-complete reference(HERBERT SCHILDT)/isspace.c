#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(void)
{
char ch;
for(;;)
{
ch=getchar();
if(isspace(ch))
{
printf("\n\n  is  a  space");
}
if(ch=='.')
break;
}
}
