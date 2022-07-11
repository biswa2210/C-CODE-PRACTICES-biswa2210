#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
 int a[30], i, num, greatest;
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   for (i = 0; i < num; i++)
   {
      scanf("%d", &a[i]);
       if (greatest< a[i])
	   {
         greatest = a[i];
      }
  }
   printf("\ngreatest Element : %d", greatest);
   getch;
}
