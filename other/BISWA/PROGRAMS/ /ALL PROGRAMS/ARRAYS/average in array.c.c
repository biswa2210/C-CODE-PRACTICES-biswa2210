// Program to find the average of n(n<10000) numbers using arrays(input given only intigers)
#include<conio.h>
#include <stdio.h>
int main()
{
     int a[10000], i, n, sum =0,av; 
     printf("Enter no: ");
     scanf("%d", &n);
     for(i=0; i<n; i++)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &a[i]);
          sum += a[i];
     }
     av = sum/n;

     printf("av = %d", av);

    getch();
}


