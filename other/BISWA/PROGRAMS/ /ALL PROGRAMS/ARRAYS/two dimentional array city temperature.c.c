// C program to store temperature of one cities for a week and display it.(two diamentional array)
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	
int i,j,CITY=1,WEEK=7, temperature[CITY][WEEK];

    //input array
    for ( i = 0; i < CITY; i++) 
	{
        for( j = 0; j < WEEK; j++)
		 {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
   
    printf("\n \n DISPLAY  \n\n\n");
    
    //print array
    for ( i = 0; i < CITY; i++) 
	{
    for( j = 0; j < WEEK; j++)
		 {
        printf("Caty %d, Day % dtemperature is = %d degree centrigrade \n",i+1, j+1,temperature[i][j]);
        }
    }

    
    getch();
}

