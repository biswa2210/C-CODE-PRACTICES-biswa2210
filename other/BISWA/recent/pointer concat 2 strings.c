#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
Beep(85,5000);
system("mode 1000");
system("title Biswa");
system("color a");
int n;
char a[20],*p,a1[20],*p1;;
printf("enter 1st your name=");
gets(a);
printf("\nenter  your last name=");
gets(a1);
p=&a[0];
printf("\n\nyour full name is=\n\n\n\n\t\t");
for(;*p!='\0';p++)
{
	printf("%c",*p);
	printf(" ");
}
printf("  ");
p1=&a1[0];
for(;*p1!='\0';p1++)
{
	printf("%c ",*p1);
}
Sleep(3000);
system("cls");
printf("T H A N K     Y O U");
system("color b");
Sleep(2000);
system("cls");
printf("plz shutdown your computer now and press'5' quick=");
scanf("%d",&n);
Sleep(1000);
printf(".....");
Sleep(1000);
printf(".");
Sleep(1000);
printf(".");
Sleep(1000);
printf(".....");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf(".");
Sleep(1000);
printf("..");
Sleep(1000);
printf("...");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
Sleep(1000);
printf("......");
Sleep(1000);
printf("..");
Sleep(1000);
printf("..");
if(n==5);
{
	system("C:\\Windows\\System32\\shutdown.exe /s");
}
getch();
}

