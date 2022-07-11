#include<stdio.h>
#include<conio.h>
void main()
{
	int i;

	for(i=1;i<=15;i++)
	{
	printf("##\t\t##\n");
		if(i==1)
		printf("################");
		if(i==2)
		printf("################");
		else if(i==7)
		printf("################");
		else if(i==8)
		printf("################");
		else if(i==14)
		printf("################");
		else if(i==15)
		printf("##################");
	}
	printf("\n\n\t\t");
		for(i=1;i<=16;i++)
	
	{
		printf("#");
	}
			for(i=1;i<=6;i++)
	
	{
		printf("\n\t\t\t#");
	}
	printf("\n\t\t");
		for(i=1;i<=16;i++)
	
	{
		printf("#");
	}
	printf("\n");
	printf("\t\t\t\t");
		for(i=1;i<=9;i++)
	
	{
		printf("#");
	}
	printf("\n");
		for(i=1;i<=3;i++)
	
	{
		printf("\t\t\t\t#\n");
	}
		printf("\t\t\t\t");
		for(i=1;i<=9;i++)
	{
		printf("#");
	}
	printf("\n");
		for(i=1;i<=3;i++)
	{
		printf("\t\t\t\t\t#\n");
	}
	printf("\t\t\t\t");
		for(i=1;i<=9;i++)
	{
		printf("#");
	}
	
	printf("\t\t\t\t\t\t");
		for(i=1;i<=6;i++)
	{
		printf("\t\t\t\t\t#\t#\t#\n");
		if(i==5)
		printf("\t\t\t\t\t#################");
	} 
	for(i=1;i<=10;i++)
	{
		printf("###\t###\n");
		if(i==1)
		printf("########");
	else if(i==5)
		printf("########");
	}
getch();
}

