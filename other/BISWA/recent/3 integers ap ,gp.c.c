#include<stdio.h>
#include<conio.h>
void main()
{
int a,c,b,hp;
printf("PLZ ENTER THE THREE INTEGER NUMBERS\n");
printf("*************************************\n");
printf("1st no.=");
scanf("%d",&a);
printf("2nt no.=");
scanf("%d",&b);
printf("3rd no.=");
scanf("%d",&c);
if((a+c)==(b+b))
{
printf("THREE NUMBERS ARE IN A.P");
}
else if((a*c)==(b*b))
{
printf("THREE NUMBERS ARE IN G.P");
}
else
printf("NORMAL INTEGERS");
getch();
}

