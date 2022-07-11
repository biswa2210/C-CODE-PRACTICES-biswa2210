#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,h=0;
printf("Enter the range=");
scanf("%d",&n);
for(i=4;i<=n;i=2*i)
{
printf("%d+",i);
h=i+h;
}
printf("=%d",h);
getch();
}

