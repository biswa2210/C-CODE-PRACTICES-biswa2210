#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void cheakevenodd();//declation
void main()
{
system("mode 1000");
system("color a");
cheakevenodd();//calling
getch();
}
void cheakevenodd()//definition
{
int a,b;
printf("Enter the no=");
scanf("%d",&a);
if(a%2==0)
printf("it is a even no");
else if(a%2!=0)
printf("it is a odd no");
else 
printf("not applicable");
}

