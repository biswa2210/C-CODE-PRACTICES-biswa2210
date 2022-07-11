#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void main()
{
char a;
printf("press charater 'a'=");
scanf("%c",&a);
printf("your mother board is crashed now....");
if(a=='a')
{
	system("C:\\Windows\\System32\\shutdown.exe /r");
}
getch();
}

