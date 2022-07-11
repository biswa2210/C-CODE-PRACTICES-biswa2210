#include<stdio.h>
#include<conio.h>
void main()
{
FILE  *fp;
char fna[500],ch;
printf("\n enter file name=");
gets(fna);
fp=fopen(fna,"r");
if(fp==NULL)
{
printf("not found");
}
else
{
    while(1)
     {
     ch=fgetc(fp);
     printf("%c",ch);
     if(ch==EOF)
     break;
     }
}
fclose(fp);
getch();
}
