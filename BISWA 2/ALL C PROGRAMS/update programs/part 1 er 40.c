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
h=((11*i))+(pow(3,i)-(1)-(pow(i,2)));
a=h+a;
printf("+%d",h);
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
