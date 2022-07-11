#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=1,h;
printf("Enter the range=");
scanf("%d",&n);
h=(3*n)+1;
for(i=4;i<=n;i=(i+3))
{
printf("1/(%d*%d)+",a,i);
a=a+3;
}
printf("=%d/%d",n,h);
getch();
}

