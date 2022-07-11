#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
if(i*8==j*2)
printf("=");
else if(i*3==j*2)
printf("=");
else if(i*2==j*3)
printf("=");
else if(i*2==j*8)
printf("=");
else 
printf("*");
}
printf("\n");
}
getch();
}

