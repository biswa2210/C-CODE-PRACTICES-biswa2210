#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
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
int n,s=0,d,rem=0;
printf("Enter The Number=");
scanf("%d",&n);
d=n;
for(;n!=0;n=n/10)
{
rem=n%10;
s=s+(rem*rem*rem);
}
if(s==d)
{
printf("it is a amstrong no");
}
else
printf("it is not a amstrong no");
getch();
}



