//WAP TO CHEAK PALINDROME STRING
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
int f=0,i,len;
char a[10000],r[100000];
printf("ENTER YOUR NAME");
gets(a);
len=strlen(a);
for(i=len-1;i>=0;i--)
{
   r[len-i-1]==a[i];
}
for(f=1,i=0;i<len;i++)
{
   if (r[i]!=a[i])
   f=0;
}
if(f==1)
printf("THIS IS A PALINDROME STRING");
else
printf("THIS IS NOT A PALINDROME STRING");
getch();
}

