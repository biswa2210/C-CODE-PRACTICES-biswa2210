#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int r,m=3,i,n,t,y,h,u=0,g=0;
printf("Enter the range=");
scanf("%d",&n);
printf("Enter the no of terms=");
scanf("%d",&t);
for(i=1,y=2;i<=n,y<=n;i=i+2,y=y+2)
{
	if(t%2==0)
{	
r=pow(m,i);
h=pow(m,y);
printf("+%d,-%d,",r,h);
g=g+2;
 if(g==t)
break;
}
else 
{
	r=pow(m,i);
printf("+%d,",r);
g++;
if(g==t-u)
break;
h=pow(m,y);
printf("-%d,",h);
u++;
}
}
getch();
}

