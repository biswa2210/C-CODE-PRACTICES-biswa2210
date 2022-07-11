#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	printf("ODD NUMBERS\n");
	for(a=1;a<n;a=a+2)
	{
		printf("THE ODD NUMBER IS=%d\n",a);
	}
	
	printf("\n");
	printf("EVEN NUMBERS");
	printf("\n");
	
	for(b=2;b<=n;b=b+2)
	{
		printf("THE EVEN NUMBER IS=%d\n",b);
	}
	
	printf("\n");
	printf("AUTOPOLYMORPHIC NUMBERS");
	printf("\n");	
	
		for(c=1;c<=n;c++)
	{
		if((c*c)%10==c)
		printf("THE AUTOPOLYMORPHIC NUMBER IS=%d\n",c);
		else
		printf("%d=NA\n",c);
	}
getch();
}

