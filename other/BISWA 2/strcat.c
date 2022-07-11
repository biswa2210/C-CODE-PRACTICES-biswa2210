//WAP TO strcat+strcpy;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000],b[1000000],h[100000];
printf("Please Enter Your Name=");
gets(a);
printf("Please Enter Your BestFriend Name=");
gets(b);
strcpy(h,strcat(a,b));
printf("the joint string is=%s",h);
getch();
}

