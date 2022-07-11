#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,n,h=1,sum1=0,sum2=0,c=0,i,sum3=0;
printf("enter the n's value=");
scanf("%d",&n);
printf("enter the no of terms=");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
h=h*(i);
a=pow(n,i);
printf("+%d/%d",a,h);
sum1=sum1+a;
sum2=sum2+h;
sum3=sum1+sum2;
}
printf("=%d",sum3);
getch();
}

