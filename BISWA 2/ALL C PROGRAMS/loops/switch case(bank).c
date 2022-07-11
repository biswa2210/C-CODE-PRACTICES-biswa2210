#include<stdio.h>
#include<conio.h>
void main()
{
char w,r;
int a,n,d,s,p;
printf("PRESS 1 FOR 5.0percent 1INCREMENT\nPRESS 2 FOR 3.5percent INCREMENT\n \n");
printf("ENTER YOUR NAME: ");
scanf("%7c",&w);
printf("ENTER YOUR CODE(only no):");
scanf("%d",&a);
printf("ENTER YOUR SALARY: ");
scanf("%d",&n);
printf("ENTER YOUR DESIGNATION: ");
scanf("%9c",&r);
printf("ENTER YOUR CHOICE=");
scanf("%d",&p);
switch(p)
{
	case 1:
	d=(((n*5)/100)+n);
	printf("SALARY(WITH 5.0percent INCREMENT)=%d",d);
	break;
	
	case 2:
	s=(((n*3.5)/100)+n);
	printf("SALARY(WITH 3.5percent  INCREMENT)=%d",s);
	break;
	
	default:
	printf("NA");		
}
getch();
}

