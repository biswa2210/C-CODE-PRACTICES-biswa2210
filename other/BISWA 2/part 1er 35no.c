#include<stdio.h>
#include<stdio.h>
void main()
{
float i,a=0;
int n,c=0;
printf("enter the no of terms(less than 7)=");
scanf("%d",&n);
for(i=0.6;i!=0;i=(i*0.1)+0.6)
{
a=i+a;
printf("+%f",i);
c++;
if(c==n)
{
break;
}
}

printf("=%f",a);
getch();
}
