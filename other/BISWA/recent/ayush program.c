#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int a,b;
printf("Enter the 1st number(integer)=");
scanf("%d",&a);
printf("Enter the 2nd number(integer)=");
scanf("%d",&b);
if(a==b)
printf("two numbers are equal");
else if(a>b)
printf("1st number is greater");
else if(a<b)
printf("2nd number is greater");
else
printf("not applicable");

getch();
}

