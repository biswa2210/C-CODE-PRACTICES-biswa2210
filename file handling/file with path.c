#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE  *fp;
char  ch;
fp=fopen("D:/files#c/icecream.txt","w");
if(fp==NULL)
{
printf("not found");
}
else
{
printf("enter the content('#' to end )=  \n");
while(1)
{
scanf("%c",&ch);
if(ch=='#')
{
break;
}
else
{
fputc(ch,fp);
}
}
fclose(fp);
getch();
}
}
