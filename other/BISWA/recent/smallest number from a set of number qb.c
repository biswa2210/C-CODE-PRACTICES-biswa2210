#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
 int a[30], i, num, smallest;
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   for (i = 0; i < num; i++)
   {
      scanf("%d", &a[i]);
       if (a[i] < smallest)
	   {
         smallest = a[i];
      }
  }
   printf("\nSmallest Element : %d", smallest);
   getch;
}
