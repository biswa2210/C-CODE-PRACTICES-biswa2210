#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,n,k=0;
printf("Enter the no to seris start=");
scanf("%d",&n);
for(i=n;i>=1;i=i-2)
{
	k=k+i;
printf("%d+",i);
system("color a");
}
printf("=%d",k);
getch();
}

