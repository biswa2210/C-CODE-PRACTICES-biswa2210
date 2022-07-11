#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,a,l=1;
printf("enter the no=");
scanf("%d",&a);
if(a!=0)
{
for(i=1;i<=a;i++)
{
l=l*i;
printf("*%d",i);
}
printf("=%d",l);
}
else if(a==0)
{
	printf("%d!=1",a);
}
else if(a<0)
{
printf("this no is not applicable");
}
getch();
}

