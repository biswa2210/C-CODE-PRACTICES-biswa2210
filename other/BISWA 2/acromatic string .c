#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
system("mode 1000");
system("color a");
int len,i;
char x[10000];
printf("enter your name=");
gets(x);
if(x[0]>=97&&x[0]<=122)
{
printf("%c.",x[0]-32);
}
for(i=0;x[i]!='\0';i++)
{

if(x[i]==' '&&x[i+1]>=97&&x[i+1]<=122)
printf("%c",x[i+1]-32);
}
getch();
}

