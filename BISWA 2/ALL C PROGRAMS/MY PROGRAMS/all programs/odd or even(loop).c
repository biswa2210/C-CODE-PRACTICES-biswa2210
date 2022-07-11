#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\t1 to 50\n");
	printf("\n");
	for(a=1;a<50;a=a+2)
	{
		printf("THE ODD NUMBER IS=%d\n",a);
	}
	
	printf("\n");
	printf("\n");
	
	for(b=2;b<=50;b=b+2)
	{
		printf("THE EVEN NUMBER IS=%d\n",b);
	}
	
	printf("\n");
	printf("\n");	
	
		for(c=1;c<=50;c++)
	{
		if((c*c)%10==c)
		printf("THE AUTOPOLYMORPHIC NUMBER IS=%d\n",c);
		else
		printf("NA=%d\n",c);
	}
getch();
}

