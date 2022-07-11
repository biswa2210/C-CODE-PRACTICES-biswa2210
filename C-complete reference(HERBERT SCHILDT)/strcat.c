#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 52
int main(void)
{
char p1[MAX],p2[MAX];
strcpy(p1,"kuttar");
strcpy(p2,"bachha");
strcat(p1,p2);
printf(p1);
getch();
}
