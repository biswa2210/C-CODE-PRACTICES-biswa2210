#include<stdio.h>
#include<conio.h>
void main()
{
printf("ONLY INTIGER GIVEN");
printf("\n*******************");
char w;
int n,u,s,f,m;
printf("\nALL CUSTOMERS HAVE MINIMUM BALANCE=500$\n");
printf("*********************************************\n");
printf("PRESS-1-FOR ALL CUSTOMERS BONOUS\nPRESS-2-FOR ALL FEMALE ACCOUNT HOLDER\n**************************************************\n");
printf("YOU ARE FEMALE ACCOUNT HOLDER[Y/N]=");
scanf("%c",&w);
printf("ENTER YOUR ACCOUNT BALANCE=");
scanf("%d",&n);
printf("\nIF YOU ARE FEMALE ACCOUNT HOLDER THEN YOU PRESS-2\nIF YOU ARE NOT FEMALE ACCOUNT HOLDER THEN YOU PRESS-1\n\n");
printf("\nENTER YOUR CHOICE=");
scanf("%d",&u);
switch(u)
{
	case 1:
	s=(n*2)/100;
	printf("SIR,YOU GET 2percent BONOUS=%d$",s);
	break;
	case 2:
	{
	if(n>5000)
	{
	f=(n*5)/100;
	printf("MAM,YOU GET 5percent BONOUS=%d$",f);
    }
	else if(n<5000)
	{
	m=(n*2)/100;
	printf("YOUR ACCOUNT BALANCE IS VERY LOW SO YOU GET BONOUS ONLY 2percent=%d$",m);
    }
}
break;
default:
printf("NA");
}
getch();
}

