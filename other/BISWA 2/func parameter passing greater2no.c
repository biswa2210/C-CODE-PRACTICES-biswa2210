#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void greater2no(int,int);//declaration
void main()
{
system("mode 1000");
system("color a");
int a,b;
printf("Enter 2 no=");
scanf("%d %d",&a,&b);
greater2no(a,b);//calling
getch();
}
void greater2no(int a,int b)//definition
{

if(a<b)
printf("2nd no is greater");
else if(a==b)
printf("BOTH ARE EQUAL");
else
printf("1st no is greater");
}


