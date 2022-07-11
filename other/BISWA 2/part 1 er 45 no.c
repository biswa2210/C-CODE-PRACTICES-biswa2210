#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
void main()
{
int i,a=0,n,c=0,h;
printf("enter the no of terms=");
scanf("%d",&n);
for(i=1;i!=0;i++)
{
h=pow(2,(i+1))-(i+2);
a=h+a;
printf("+%d",h);
c++;
5
if(c==n)
{
break;
}
}
printf("=%d",a);
Sleep(40000);
getch();
}
