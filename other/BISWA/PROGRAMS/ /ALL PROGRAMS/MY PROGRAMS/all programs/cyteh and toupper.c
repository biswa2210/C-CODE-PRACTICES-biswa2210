//wap to using ctype.h and toupper.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000];
int i;
printf("PLEASE ENTER YOUR NAME= ");
gets(a);
a[0]=toupper(a[0]);
printf("UPDATED STRING IS=%s",a);
getch();
}

