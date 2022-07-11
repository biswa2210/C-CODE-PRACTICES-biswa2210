#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
char x[50000];
int len,i;
printf("ENTER YOUR  FIRST NAME=");
gets(x);
len=strlen(x);
printf("YOUR NAME LENGTH IS=%d\n",len);
for(i=0;i<=len;i++)
{
printf("%c\n",x[i]);
}

getch();
}

