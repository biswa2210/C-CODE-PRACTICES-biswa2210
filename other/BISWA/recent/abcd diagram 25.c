#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,j;
char x='D';
for(i=x;i>=(x-3);i--)
{
for(j=i;j>=(x-3);j--)
{
printf("%c",j);
}
printf("\n");

}
getch();
}

