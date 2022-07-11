#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int n,i,rem=0,f=0;;
printf("Enter the no=");
scanf("%d",&n);
for(;n>0;n=n/10)
{
	rem=n%10;
	if(rem%2!=0)
	{
		f=1;
	}
	else
	{
		f=0;
		break;
	}
}
if(f==1)
printf("odd series");
else
printf("not odd series");
}

