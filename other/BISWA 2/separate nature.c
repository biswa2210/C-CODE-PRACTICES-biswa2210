#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
	
printf("\n\n\n\n\\t\t\t\tloading");
Sleep(1000);
printf("\n\t\t||||");
Sleep(1500);
printf("|||");
Sleep(1300);
printf("||||");
Sleep(1000);
printf("|||");
Sleep(1400);
printf("||||");
Sleep(1000);
printf("||||");
Sleep(1600);
printf("\n\n\n\n\n\t\t\t\t\tloading complete...");
Sleep(2000);
system("cls");
int n,h;
printf("Enter the numbers=");
scanf("%d",&n);
printf("\n");
for(;n!=0;n=n/10)
{
h=n%10;
Sleep(1200);
printf("%d,",h);
}
getch();
}

