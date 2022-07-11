#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
#include<dos.h>
void main()
{
int a;
char i;
printf(" PLZ PRESS 'A' TO START BEEPING=");
scanf("%c",&i);
system("mode 1000");
system("color a");
system("title BISWA");
printf("This is beeping.................................");
if(i=='A'||i=='a')
{
for(a=200;a<=20000;a=a+60)
{
Beep(a,2000);
}
}
else
{
printf("NA.................................");
}
getch();
}

