#include<stdio.h>
#include<conio.h>
void main()
{
int i,s=1,j=1,g=0,n,v=0;
printf("Enter the range=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	s=s*i;
	g=g+s;
	printf("%d/%d+",j,s);
	v=j+v;
	j++;
}
printf("=%d/%d",v,g);
getch();
}

