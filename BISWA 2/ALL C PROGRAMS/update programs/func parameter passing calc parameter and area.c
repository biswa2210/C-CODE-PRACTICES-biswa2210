#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcparameterandarea(int);//declaration
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
int a;
printf("Enter the side of square=");
scanf("%d",&a);
calcparameterandarea(a);//calling part
getch();
}
void calcparameterandarea(int a)//definition
{
printf("The area is=%d\nThe parameter is=%d",a*a,4*a);
}


