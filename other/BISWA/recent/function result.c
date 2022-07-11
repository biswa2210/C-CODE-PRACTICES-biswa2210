#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcresult();//declaration
void main()
{
system("mode 1000");
system("color a");
calcresult();//calling 
getch();
}
void calcresult()//definition
{
		int q;
	float t,p,b,c,d,a;
	char r;
printf("ENTER YOUR NAME=");
scanf("%9c",&r);
	printf("ROLL NO.=");
	scanf("%d",&q);
	printf("Plz enter score in math=");
	scanf("%f",&p);
	printf("Plz enter score in physics=");
	scanf("%f",&b);	
	printf("Plz enter score in computer science=");
	scanf("%f",&c);	
	printf("Plz enter score in chemistry=");
	scanf("%f",&d);	
	t=(p+b+c+d);
	a=(t*100)/400;
	printf("ALL TOTAL(400)=%.2f(WITH NEGETIVE MARKING)\n",t);
	printf("PERCENTAGE IS=%.2f\n",a);
	if(a>=0&&a<=40)
	printf("FAIL(BEST OF LUCK FOR NEXT TIME)");
	else if(a>18&&a<=49.5)
	printf("GRADE-C(NOT GOOD)");
	else if(a>49.5&&a<=59.5)
	printf("GRADE-B(FAR BETTER)");
	else if(a>59.5&&a<=79.5)
	printf("GRADE-A(VERY GOOD)");
	else if(a>79.5&&a<=80)
	printf("GRADE-A+(EXCELENT)");
	else if(a>80&&a<=90)
	printf("GRADE-AA(OUTSTANDING)");
	else
	printf("GO TO HELL(PLZ ENTER REAL NUMBER)");
}

