//WAP TO CHEAK STRINGS ARE MACH OR NOT
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000],b[1000000];
printf("Please Enter Your Name=");
gets(a);
printf("Please Enter Your BestFriend Name=");
gets(b);
strcmp(a,b);
if(strcmp(a,b)==0)
printf("MACHED");
else 
printf("NOT MACHED");
getch();
}

