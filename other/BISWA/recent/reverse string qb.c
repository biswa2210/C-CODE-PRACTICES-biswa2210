#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,len;
char a[10000];
printf("enter the string=");
gets(a);
len=strlen(a);
printf("reverse string is=");
for(i=len;a[i]>=0;i--)
{
printf("%c",a[i]);
}
getch();
}

