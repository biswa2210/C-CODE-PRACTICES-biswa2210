//wap to terminate loading 3dots
#include<dos.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
    printf ("Loading");
    for (;;)
	 {
        for ( i = 0; i < 3; i++)
		 {
            printf(".");
        }
        printf("\b\b\b   \b\b\b");
    }

getch();
}
