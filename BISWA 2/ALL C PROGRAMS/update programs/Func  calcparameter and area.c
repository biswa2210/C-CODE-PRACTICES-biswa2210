#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcparameterandarea();//declaration
void main()
{
system("mode 1000");
system("color a");
calcparameterandarea();//calling
getch();
}
void calcparameterandarea()//definition
{
int a,ar,pr;
printf("Enter the side of square=");
scanf("%d",&a);
ar=a*a;
pr=4*a;
printf("The area is=%d\nThe parameter is=%d",ar,pr);
}


