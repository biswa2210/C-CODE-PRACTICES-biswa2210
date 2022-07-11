#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a,b,c,d,p,q,r,s;
	printf("Enter the 1st no=");
	scanf("%d",&a);
	printf("Enter the 2nd no=");
	scanf("%d",&b);		
	printf("Enter the 3rd no=");
	scanf("%d",&c);			
	printf("Enter the 4th no=");
	scanf("%d",&d);			
		p=(a+b+c+d);
		q=(a-b-c-d);
		r=(a*b*c*d);
		s=(a+b+c+d)/4;
	printf("Requered the addition result is=%d\n",p);
	printf("Requered the substraction result is=%d\n",q);	
	printf("Requered the Multiplication result is=%d\n",r);
	printf("the avverage  is=%d\n",s);
	}
