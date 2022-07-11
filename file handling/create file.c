#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE  *fp;
char  fna[400] ,ch;
printf("enter the file name= ");
gets(fna);
fp=fopen(fna,"w");
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
