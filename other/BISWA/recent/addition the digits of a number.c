#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int n,k=0,rem;
printf("PLZ ENTER THE NUMBER=");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
k=k+rem;
n=n/10;
}
printf("addition of the digits is=%d",k);
getch();
}

