#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=28;i++)
	{
		printf("\t#####\t\t\t######\n");
		if(i==25)
		printf("\t##############################");
		else if(i==26)
		printf("\t##############################");	
		else if(i==27)
		printf("\t##############################");
		else if(i==28)
		printf("\t##############################");
	}
getch();
}

