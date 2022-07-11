#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,n,h=1,i, sum1=0,sum2=0;
printf("enter the n's value=");
scanf("%d",&n);
printf("enter the no of terms=");
scanf("%d",&a);
printf("1");
for(i=1;i<=(a-1);i++)
{
h=h*(i);
b=pow(n,i);
printf("+(%d/%d)",b,h);
sum1=(b/h)+sum1;
sum2=sum1+1;
}
printf("=%d",sum2);
getch();
}
