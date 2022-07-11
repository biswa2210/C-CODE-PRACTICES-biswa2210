#include<stdio.h>
#include<conio.h>
void main()
{
char w,r;
int a,n,d,s,f;
printf("PRESS 2 FOR EMPLOYEE SALARY(with 5.0percent 1INCREMENT)\n1=MANAGER(PRESS 1 FOR MANAGER'S SALARY')\n \n");
printf("ENTER YOUR NAME: ");
scanf("%7c",&w);
printf("ENTER YOUR CODE(only no):");
scanf("%d",&a);
printf("ENTER YOUR SALARY: ");
scanf("%d",&n);
printf("ENTER YOUR DESIGNATION: ");
scanf("%9c",&r);
printf("ENTER YOUR CHOICE=");
scanf("%d",&f);
switch(f)
{
	case 1:
	d=(((n*5)/100)+n);
	printf("SALARY(WITH 5.0percent INCREMENT)=%d\n",d);
	break;
	
	case 2:
	s=(((n*3.5)/100)+n);
	printf("SALARY(WITH 3.5percent INCREMENT)=%d",s);
	break;
	
	default:
	printf("NA");		
}
getch();
}

