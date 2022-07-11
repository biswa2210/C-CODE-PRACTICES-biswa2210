#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int n,i,h=0,a,f=0;
printf("Enter the first term=");
scanf("%d",&a);
printf("Enter the number of terms=");
scanf("%d",&n);
for(i=a;i>=1;i=i-2)
{   

	h=i+h;
printf("%d,",i);
f++;
if(f==n)
break;
}
printf("\nthe sum of the series=%d",h);

getch();
}

