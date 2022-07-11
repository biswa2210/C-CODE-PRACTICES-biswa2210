#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,n,k;
printf("Enter the no=");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
k=n*i;
printf("\n%d*%d=%d",n,i,k);
Sleep(1000);
system("color a");
}
getch();
}

