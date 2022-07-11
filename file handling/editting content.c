#include<stdio.h>
#include<conio.h>
void main()
{
FILE  *file_pointer;
char  filename[500],ch,ch2;
printf("enter the file name for editting=");
gets(filename);
file_pointer=fopen(filename,"a");
if(file_pointer==NULL)
{
   printf("NOT FOUND");
}
else
{
   while(1)
   {
   ch=fgetc(file_pointer);
   if(ch==EOF)
   {
   scanf("%c",&ch2);
   if(ch2=='#')
   {
   break;
   }
   else
   {
   fputc(ch2,file_pointer);
   }
   }
   }
}
fclose(file_pointer);
getch();
}
