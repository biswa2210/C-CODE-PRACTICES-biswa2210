//wap to store a value using pointer variable
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int x,a1,*p,*p1;
Beep(85,5000);
system("mode 1000");
system("color a");
printf("Enter the 2 no=");
scanf("%d%d",&x,&a1);
p=&x;
p1=&a1;
printf("\n The address of A is %u",p);
printf("\n The address of A1 is %u",p1);
printf("\n The address of A is %u",*p);
printf("\n The address of A1 is %u",*p1);
getch();
}

