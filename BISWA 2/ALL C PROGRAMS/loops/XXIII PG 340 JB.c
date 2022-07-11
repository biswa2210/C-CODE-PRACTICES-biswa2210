#include<stdio.h>
#include<conio.h>
void main()
{
int i,x,n,a=0,h;
printf("ENTER THE NUMBER (X)=");
scanf("%d",&x);
printf("RANGE=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("%d-%d+",x,x);
	h=x;

}
	if(n%2==0)
	printf("=%d",a);
	 else if(n%2!=0)
	printf("=%d",h);
getch();
}

