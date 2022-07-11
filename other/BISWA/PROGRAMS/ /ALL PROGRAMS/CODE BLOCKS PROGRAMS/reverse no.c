#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem=0,c=0;
printf("please enter the number=");
scanf("%d",&n);
for(;n!=0;n=n/10)
{
c=n%10;
rem=(rem*10)+c;
}
printf("the reverse number is=%d",rem);
}
