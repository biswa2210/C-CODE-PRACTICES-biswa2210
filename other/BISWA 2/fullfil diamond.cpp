#include<stdio.h>
#include<conio.h>
int main()
{
int m,p,q,i,j,k;
for(m=1;m<=5;m++)
{
for(p=m;p<5;p++)
{
	printf(" ");
}
	for(q=1;q<(m*2);q++)
{
	printf("*");
       }
       
 printf("\n");
}

for(i=5;i>=1;i--)
{
for(j=5;j>i;j--)
{
	printf(" ");
}

for(k=1;k<(i*2);k++)
{
	printf("*");
       }
       
 printf("\n");
}
getch();
}



