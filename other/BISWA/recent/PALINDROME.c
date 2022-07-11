#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,rev=0,r;
	printf("PLZ ENTER THE INTEGER NUMBER=");
	scanf("%d",&n);
	c=n;
	while(c!=0)
	{
		r=c%10;
		rev=(rev*10)+r;
		c=c/10;
	}
	printf("reverse no=%d\n",rev);
	if(n==rev)
	printf("IT IS PALINDROME NO.");
	else
	printf("IT IS NOT A PALINDROME NO.");
getch();
}

