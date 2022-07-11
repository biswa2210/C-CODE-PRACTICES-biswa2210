#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=1,h=1,z=0,o=0,t;
printf("Enter the range=");
scanf("%d",&n);
for(i=3;i<=n;i=i+2)
{
	o=i+o;
	h=a*h;
	t=(2*h);
	printf("(%d/%d)+",t,i);
	z=z+t;
	a=2;
}
printf("=%d/%d",z,o);
getch();
}

