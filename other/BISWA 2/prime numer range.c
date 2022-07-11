#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
   int i,f,upper,lower, n;
   printf(" ENTER THE LOWER LIMIT : ");
   scanf("%d", &lower);
   printf("\n ENTER THE UPPER LIMIT : ");
   scanf("%d", &upper);
   printf("\n PRIME NUMBERS LIST IS : ");
   for(n=lower+1; n<upper; n++)
   {
   	f=1;
     for(i=2; i<=n/2; i++)
       if(n%i == 0)
       {
         f = 0;
         break;
       }
     if(f==1)
       printf("\t\n\t%d", n);
   }
   getch;
 }
