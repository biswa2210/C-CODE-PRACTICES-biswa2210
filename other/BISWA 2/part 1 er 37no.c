#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
void main()
{
int i,a=0,n,c=0,h=0,j,t=0;
printf("enter the no of terms=");
scanf("%d",&n);
for(i=1,j=1;i!=0,j!=0;i++,j=j+2)
{
h=pow(2,i);
a=h+a;
t=j+t;
printf("+(%d/%d)",j,h);
c++;
if(c==n)
{
break;
}
}
printf("=(%d/%d)",t,a);
Sleep(400000);
getch();
}
