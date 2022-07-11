#include<ctype.h>
#include<stdio.h>
int main(void)
{
char ch;
for(;;)
{
ch=getchar();
if(ch=='.')
break;
if(isalpha(ch))
printf("\n\n%c is a alphabets\n",ch);
}
return 0;
}
