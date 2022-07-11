//wap to space count,lines count,words count;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,c=0,j=0,k=0;
char a[100000];
Sleep(2000);
printf("PLEASE ENTER A SMALL PARAGRAPH= ");
gets(a);
Sleep(2000);
printf("loading.....\n");
Sleep(3000);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("\n\t\tprint the no of space=%d\n",c);
Sleep(2000);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='\n')
j++;
}
printf("\t\tprint the no of total lines=%d\n",j);
Sleep(2000);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
k++;
}
printf("\t\tprint the no of total words=%d\n",k);
Sleep(2000);
getch();
}

