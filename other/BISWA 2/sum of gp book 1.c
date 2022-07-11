#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void main()
{
int i,n,a,f,h=0,g=0;
printf("Enter the first term=");
scanf("%d",&a);
printf("Enter common ratio=");
scanf("%d",&n);
printf("Enter the no of terms=");
scanf("%d",&f);
Sleep(3000);
printf("\n\n\n\t\t\t\tloading\n");
Sleep(1000);
printf("\t\t\t|||||||||||||||");
Sleep(2000);
printf("|||||||||||\n\n\n");
for(i=a;i<=100000;i=n*a)
{
	h=i+h;
	a=i;
printf("%d+",i);
g++;
if(g==f)
break;
}
printf("=%d",h);
getch();
}

