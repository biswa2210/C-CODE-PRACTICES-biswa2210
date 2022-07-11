#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,r,p,q=0,t,w=0,f,e=0;
printf("CHEAK MAGIC NUMBER(MAXIMUM FOUR DIGITS NUMBERS)\n");
printf("***********************************************************\n");
printf("Enter the number=");
scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	s=s+r;
	n=n/10;
	}
while(s!=0)
{
	p=s%10;
	q=q+p;
	s=s/10;
}
while(q!=0)
{
	t=q%10;
	w=w+t;
	q=q/10;
}
while(w!=0)
{
	f=w%10;
	e=e+f;
	w=w/10;
}
if(e==1)
printf("IT IS MAGIC NUMBER");
else
printf("IT IS NOT A MAGIC NUMBER");
getch();
}

