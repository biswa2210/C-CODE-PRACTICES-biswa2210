#include<stdio.h>
#include<conio.h>
void main()
{
float a=1,t=1,x,l,pi=3.1416;
int i,m=1;
printf("ANGLE=");
scanf("%f",&x);
l=(x*pi)/180;
for(i=1;i<=2*m;i=i+2)
{
	t=((t*l*(-1)*l)/(i*(i+1)));
	a=a+t;
}
printf("cos(%f)=%.2f",x,a);
getch();
}

