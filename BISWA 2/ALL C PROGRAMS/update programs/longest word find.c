#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[500],b[20200],c[20];
 int i,j=0,l=0,r,r2;
 printf("Enter a string:\n");
 gets(a);
 r=strlen(a);
 for(i=0;i<=r;i++)
 {
 if(a[i]!=' '&&a[i]!='\0')
 {
 b[j++]=a[i];
 }
 else
 {
 b[j]='\0';
 if(strlen(b)>l)
 {
 strcpy(c,b);
 l=strlen(b);
 }
 j=0;
 }
 }
 printf("The longest word is:");
 puts(c);
 getch();
}
