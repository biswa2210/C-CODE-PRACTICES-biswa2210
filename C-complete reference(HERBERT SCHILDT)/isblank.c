#include<stdio.h>
#include<conio.h>
int main(void)
{
char ch;
for(;;)
{
ch=getchar();
if(ch=='.')
break;
if(isblank(ch))
printf("\n\n%c  is  a  word separator\n",ch);
}
return 0;
}
