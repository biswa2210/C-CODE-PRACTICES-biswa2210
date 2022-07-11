#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,c=0;
char a[100];
printf("enter the string= ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
printf("the string length is=%d",c);
getch();
}

