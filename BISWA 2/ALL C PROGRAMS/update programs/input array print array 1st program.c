//input given  range=n(n<500000)
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
int a[500000],i,n;
printf("ENTER THE RANGE=");
scanf("%d",&n);
//input array
for(i=0;i<n;i++)
{
printf("ENTER THE NO=");
scanf("%d",&a[i]);
}
//print array
for(i=0;i<=n;i++)
{
printf("THE POSITION IN ARRAY a[%d]=%d\n",i,a[i]);
}
getch();
}

