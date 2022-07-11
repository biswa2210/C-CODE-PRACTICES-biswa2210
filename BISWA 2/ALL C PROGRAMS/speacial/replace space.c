//WAP TO SPACE REPLACE WITH :'$'
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
printf("ENTER YOUR NAME IS= ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
a[i]='$';
}
printf("updated string is=%s",a);
getch();
}

