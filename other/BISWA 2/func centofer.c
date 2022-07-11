#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void centoferenhite();//declaration
void main()
{
system("mode 1000");
system("color a");
centoferenhite();//calling
getch();
}
void centoferenhite()//definition
{
float f,c;
printf("Enter the centrigrate ");
scanf("%f",&c);
f=((9*c)/5)+32;
printf("The Ferenhite is %.2f ",f);
}


