#include<stdio.h>
#include<string.h>
void main()
{
int len=0,i;
char a[100];
printf("Enter the string : ");
gets(a);
for(i=0;a[i]<='\0';i++)
{
len++;
}
printf("LENGTH OF THIS STRING IS= %d",len);
getch();
}

