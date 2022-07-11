#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int a,b,c;
printf("enter the 1st no=");
scanf("%d",&a);
printf("enter the 2nd no=");
scanf("%d",&b);
printf("enter the 3rd no=");
scanf("%d",&c);
if(a<b&&c<b)
printf("the greatest no is %d",b);
else if(c<a&&b<a)
printf("the greatest no is %d",a);
else if(a<c&&b<c)
printf("the greatest no is %d",c);
getch();
}

