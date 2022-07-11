#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
void main()
{
int i,a=0,n,c=0;
printf("enter the no of terms=");
scanf("%d",&n);
for(i=64;i!=0;i=i/2)
{
a=i+a;
printf("+%d",i);
c++;
if(c==n)
{
break;
}
}
printf("=%d",a);
Sleep(40000);
getch();
}
