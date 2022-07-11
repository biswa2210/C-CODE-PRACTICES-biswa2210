//addition no return type;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void add();//declaration
void main()
{
	system("mode 1000");
    system("color a");
	add();//calling
	getch();
}
void add()//definition
{
system("mode 1000");
system("color a");
int a,v,c;
printf("Enter the 2 numbers=\n");
scanf("%d   %d",&a,&v);
c=a+v;
printf("The addition is= %d",c);

}

