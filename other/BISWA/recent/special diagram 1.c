#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,s,n,c=0;
printf("enter the no of lines=");
scanf("%d",&n);
for(i=1;i!=0;i+=2)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
c++;
if(c==n)
break;
}
getch();
}

