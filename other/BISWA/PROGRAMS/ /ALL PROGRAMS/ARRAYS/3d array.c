//wap to 3 dimentional array
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
int main()
{
    // this array can store 3 values

    int i, j, k, t[1][1][3];

    printf("Enter 3 values: \n");

    for(i = 0; i < 1; i++)
	 {
        for (j = 0; j < 1; j++) 
	{
    for(k = 0; k < 3; k++ )
		{
       scanf("%d", &t[i][j][k]);
        }
       }
    }

    // Displaying values 

    printf("\nDisplaying values:\n");

    for(i = 0; i < 1; i++)
	 {
        for (j = 0; j < 1; j++) 
	{
            for(k = 0; k < 3; k++ ) 
	{
         printf("t[%d][%d][%d] = %d\n", i, j, k, t[i][j][k]);
    }
}
}

    getch();
}
