#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void avg4noandaddition();
void main()
{
system("mode 1000");
system("color a");
avg4noandaddition();
getch();
}
void avg4noandaddition()
{
int a,b,c,p,q;
printf("enter the 4 no=\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&p);
q=a+b+c+p;
printf("the avg of 4 no=%d\n",q/4);
printf("the addition of 4 no=%d",q);
}


