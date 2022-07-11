#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=25;i++)
	{
		printf("#");
	}
	for(i=1;i<=25;i++)
	{
		printf("#\n");
	}
	for(i=1;i<=25;i++)
	{
		if(i==25)
		printf("###########################");
	}
getch();
}

