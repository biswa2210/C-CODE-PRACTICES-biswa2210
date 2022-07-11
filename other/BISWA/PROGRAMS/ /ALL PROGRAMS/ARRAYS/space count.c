#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int i,c=0;
char a[100000];
printf("PLEASE ENTER YOUR NAME= ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("print the no of space=%d",c);
getch();
}

