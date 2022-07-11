#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,h,g,a=0;
printf("Enter the range=");
scanf("%d",&n);
h=n+1;
g=2*n;
for(i=1;i<=n;i++)
{
   a=a+i;
    printf("1/%d+",a);
	
}
printf("=%d/%d",g,h);
getch();
}

