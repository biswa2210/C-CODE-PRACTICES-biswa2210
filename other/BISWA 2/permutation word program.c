#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int f=1,i,h,len;
printf("enter the word=");
gets(a);
len=strlen(a);
printf("\n\n\n");
printf("%s ---  find its permutation?\n",a);
for(i=1;i<=len;i++)
{
f=i*f;
}
h=f;
printf("permutation is  %d ",h);
getch();
}
