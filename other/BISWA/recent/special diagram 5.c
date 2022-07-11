#include<stdio.h>
#include<conio.h>
void main()
{
int i2,j2;
for(i2=5;i2>=1;i2--)
{
for(j2=1;j2<=5;j2++)
{
if(j2<=i2)
printf("%d",j2);
else
printf(" ");
}
for(j2=5;j2>=1;j2--)
{
if(j2<=i2)
printf("%d",j2);
else
printf(" ");
}
printf("\n");
}
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
for(j=5;j>=1;j--)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
getch();
}

