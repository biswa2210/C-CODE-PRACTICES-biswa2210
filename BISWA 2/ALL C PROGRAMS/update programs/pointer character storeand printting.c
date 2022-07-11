#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
Beep(85,7000);
system("mode 1000");
system("color a");
int x,y,*p,*q;
printf("enter 2 character=\n");
scanf("\n%c\n%c",&x,&y);
p=&x;
q=&y;
printf("the address of 1st character is=%u",p);
printf("\nthe value of 1st character is=%c",*p);
printf("\nthe address of 2nd character is=%u",q);
printf("\nthe value of 2nd character is=%c",*q);
getch();
}

