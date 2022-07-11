#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
	system("color d");
	    Sleep( 2000 );
	printf("\n\n\n\n\t\t\t\tlOADING\n");
	Sleep( 1000 );
    printf ( "\t\t\t||||" ) ;
    Sleep(1500);
    printf("|");
    Sleep(1000);
    printf ( "||" );
    Sleep( 1000 );
    printf ( "|||" );
     printf("||");
    Sleep(1000);
    printf("|");
    Sleep( 1000 );
    printf ( "||" );
	printf("|");
    Sleep( 1000 );
    printf("|");
  
    Sleep( 1000 );
    printf("|");
    Sleep( 1000 );
    printf("|");
    Sleep( 1000 );
    printf("|");
    Sleep( 1000 );
    printf("|");
    Sleep( 1000 );
    printf("|");
    Sleep( 1000 );
  Sleep( 1000 );
    printf ( "|||" );
    printf ( "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tloading complete");
    Sleep(3000);
    system("cls");
system("color a");
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2;i++)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
getch();
}
