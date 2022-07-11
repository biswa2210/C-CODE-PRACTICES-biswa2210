#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
void main()
{
	int i,j;
printf("enter the frequency(avobe 200)=");
scanf("%d",&i);
printf("enter the time period(1000 milisec=1sec avobe 1sec)=");
scanf("%d",&j);
Beep(i,j);
getch();
}

