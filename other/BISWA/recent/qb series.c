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
printf("Enter the range=");
scanf("%d",&n);
for(i=1;i<=n;i=i*2)
{
	k=k+i;
printf("1/%d+",i);
system("color a");
}
printf("=1/%d",k);
getch();
}

