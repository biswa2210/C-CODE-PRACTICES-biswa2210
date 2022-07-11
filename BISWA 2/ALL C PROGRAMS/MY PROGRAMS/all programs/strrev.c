//wap to use strrev
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000];
printf("Please Enter Your Name=");
gets(a);
strrev(a);
printf("updated reverse string=%s",a);
getch();
}

