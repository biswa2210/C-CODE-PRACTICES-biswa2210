// C program to store temperature of one cities for a week and display it.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
int i,j,CITY=1,a,b,WEEK=7, temperature[CITY][WEEK];
    for ( i = 0; i < CITY; i++) 
	{
        for( j = 0; j < WEEK; j++)
		 {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\n \n DISPLAY  \n\n\n");
    for ( i = 0; i < CITY; i++) 
	{
    for( j = 0; j < WEEK; j++)
		 {
        printf("Caty %d, Day % dtemperature is = %d degree centrigrade \n",i+1, j+1,temperature[i][j]);
        }
    }

    
    getch();
}

