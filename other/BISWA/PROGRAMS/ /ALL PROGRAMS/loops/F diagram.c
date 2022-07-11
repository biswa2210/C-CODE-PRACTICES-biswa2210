#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1; i<=25; i++)
	{
		printf("#");
		}
		for(i=1; i<=15; i++)
		{
			if(i==5)
			printf("###############");
			else
			printf("#\n");
		}
getch();
}

