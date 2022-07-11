#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
void main()
{
int i,a=0,n,j=0,c=0,h;
printf("enter the no of terms=");
scanf("%d",&n);
for(i=1,j=2;i!=0,j!=0;i=i+1,j++)
{
h=pow(3,i);
a=(j*h)+a;
printf("+(%d*%d)",j,h);
c++;
if(c==n)
{
break;
}
}
printf("=%d",a);
Sleep(4000000);
getch();
}
