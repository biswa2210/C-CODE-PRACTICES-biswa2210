#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int n,rem=0,c=0;
printf("enter the number=");
scanf("%d",&n);
while(n!=0)
{
c=n%10;
rem=(rem*10)+c;
n=n/10;
}
printf("the reverse no is=%d",rem);
getch();

}

