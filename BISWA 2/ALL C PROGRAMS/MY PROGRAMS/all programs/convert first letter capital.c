//wap to convert capital first letter in your full name 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000];
int i;
printf("PLEASE ENTER YOUR NAME(name+sername)= ");
gets(a);
a[0]=toupper(a[0]);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
a[i+1]=toupper(a[i+1]);
}
printf("updated string is=%s",a);
getch();
}

