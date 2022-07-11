#include<stdio.h>
#include<math.h>
void main()
{
int i, n, sum, lim_low, lim_up;
printf(" ENTER THE LOWER LIMIT…: ");
scanf("%d",&lim_low);
printf(" ENTER THE UPPER LIMIT…: ");
scanf("%d", &lim_up);
printf(" THE PERFECT NUMBER ARE..:");
for(n=lim_low+1; n<lim_up; n++)
{
sum = 0;
for(i=1; i<n; i++)
if(n%i == 0)
sum = sum + i;
if (sum == n)
printf("\n\n\t\t\t%d",n);
}
getch();
}
