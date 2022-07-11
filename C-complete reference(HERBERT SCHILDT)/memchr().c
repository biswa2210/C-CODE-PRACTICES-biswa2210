#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char *p;
p=memchr("this is a test",' ',14);
printf(p);
getch();
}
