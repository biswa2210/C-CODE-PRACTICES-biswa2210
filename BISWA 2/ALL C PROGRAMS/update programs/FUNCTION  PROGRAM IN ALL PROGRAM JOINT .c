#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
void calcparameterandarea();//1 declaration
void autopolymorphicno();//2 declaration
void cheakevenodd();//3 declaration
void agecheaking();//4 declaration
void calcmonth();//5 declaration
void centoferenhite();//6 declaration
void calcday();//7 declaration
void calcyear();//8 declaration
void add();//9 declaration
void greater2no();//10 declaration
void dayasperchoice();//11 declaration
void calcyearbymonth();//12 declaration
void avg4noandaddition();//13 declaration
void calcareaanddiameterofcircle();//14 declaration
void calcsimpleinterest();//15 declaration
void calcresult();//16 declaration
void calcelecticbill();//17 declaration
void nestsdstardiagram();//18 declaration part
void series6();//19 declaration part
void series2();//20 declaration part
void nestedstardiamondshapeddiagram();//21 declaration part
void series3();//22 declaration part
void series4();//23 declaration part
void series5();//24 declaration part
void series1();//25 declaration part
void main()
{
system("title BISWA");
system("mode 1000");
system("color a");
series5();//1 calling part
series1();//2 calling part
calcparameterandarea();// 3calling part
autopolymorphicno();// 4calling part
cheakevenodd();//5 calling part
agecheaking();//6 calling part
calcmonth();//7 calling part
centoferenhite();//8 calling part
calcday();//9 calling part
calcyear();//10 calling part
add();//11 calling part
dayasperchoice();//12 calling part
greater2no();//13 calling part
calcyearbymonth();//14 calling part
avg4noandaddition();//15 calling part
calcareaanddiameterofcircle();//16 calling part
calcsimpleinterest();//17 calling part
calcresult();//18 calling part
calcelecticbill();//19 calling part
nestsdstardiagram();//20 calling part
series6();//21 calling part
series2();//22 calling part
nestedstardiamondshapeddiagram();//23 calling part
series3();//24 calling part
series4();//25 calling part
getch();
printf("\n");
}
void calcparameterandarea()//definition
{
int a,ar,pr;
printf("Enter the side of square=");
scanf("%d",&a);
ar=a*a;
pr=4*a;
printf("The area is=%d\nThe parameter is=%d",ar,pr);
printf("\n\n");
}
void add()//definition
{
system("mode 1000");
system("color a");
int a,v,c;
printf("Enter the 2 numbers=\n");
scanf("%d   %d",&a,&v);
c=a+v;
printf("The addition is= %d",c);
printf("\n\n");
}

void agecheaking()//definition
{
int a;
printf("enter the age= ");
scanf("%d",&a);
if(a>=0&&a<=18)
printf("Teenager");
if(a>18&&a<=35)
printf("young age");
if(a>35&&a<=60)
printf("middle age");
if(a>60&&a<=110)
printf("old age");
if(a>110&&a<=10000)
printf("hell");
printf("\n\n");
}

void calcday()//definition part
{
	int y,d;
printf("Enter the number of years=");
scanf("%d",&y);
d=y*365;
Sleep(3000);
printf("%dyear=%ddays",y,d);
printf("\n\n");
Sleep(5000);
}

void calcmonth()//definition part
{
	int y,m,x;
printf("year=");
scanf("%d",&y);
m=(y*12);
printf("%dyear=%dmonths",y,m);
printf("\n\n");
}

void calcyear()//difinition
{
int d,p,y;
printf("Enter the number of days=");
scanf("%d",&y);
d=y/365;
p=y%365;
printf("Requered the no of years=%d\n",d);
printf("Requered the no of days=%d\n",p);
printf("\n\n");
Sleep(5000);
}

void calcyearbymonth()
{
	int m,x,y;
printf("Months=");
scanf("%d",&m);
y=m/12;
x=m%12;
printf("%dMonths=%dyears\n\t%dmonths",m,y,x);
printf("\n\n");
}
void centoferenhite()//definition
{
float f,c;
printf("Enter the centrigrate ");
scanf("%f",&c);
f=((9*c)/5)+32;
printf("The Ferenhite is %.2f ",f);
printf("\n\n");
}

void autopolymorphicno()//definition
{
int a;
printf("Enter the no= ");
scanf("%d",&a);
if((a*a)%10==a)
printf("this is autopolymorphic no");
else if((a*a)%10!=a)
printf("this is not a autopolymorphic no");
else
printf("not applicable");
printf("\n\n");
}

void cheakevenodd()//definition
{
int a,b;
printf("Enter the no=");
scanf("%d",&a);
if(a%2==0)
printf("it is a even no");
else if(a%2!=0)
printf("it is a odd no");
else 
printf("not applicable");
printf("\n\n");
}

void dayasperchoice()//definition
{
int d;
printf("1=MONDAY\n");
printf("2=TUESDAY\n");
printf("3=WEDNESDAY\n");
printf("4=THUSDAY\n");
printf("5=FRYDAY\n");
printf("6=SATERDAY\n");
printf("7=SUNDAY\n");
printf("ENTER THE DAY\n");
scanf("%d",&d);
if(d==1)
printf("MONDAY");
else if(d==2)
printf("TUESDAY");
else if(d==3)
printf("WEDNESDAY");
else if(d==4)
printf("THUSDAY");
else if(d==5)
printf("FRYDAY");
else if(d==6)
printf("SATERDAY");
else if(d==7)
printf("SUNDAY");
else
printf("not applicable");
printf("\n\n");
}

void greater2no()//definition
{
int a,b;
printf("Enter 2 no=");
scanf("%d %d",&a,&b);
if(a<b)
printf("2nd no is greater");
else if(a==b)
printf("BOTH ARE EQUAL");
else
printf("1st no is greater");
printf("\n\n");
}
void avg4noandaddition()
{
int a,b,c,p,q;
printf("enter the 4 no=\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&p);
q=a+b+c+p;
printf("the avg of 4 no=%d\n",q/4);
printf("the addition of 4 no=%d",q);
printf("\n\n");
}

void calcareaanddiameterofcircle()
{
float pi=3.14,r,ar,di;
printf("enter radious of the circle=");
scanf("%f",&r);
di=2*r;
ar=pi*r*r;
printf("diameter of this circle=%.2f\n",di);
printf("area of this circle=%.2f",ar);
printf("\n\n");
}
void calcsimpleinterest()
{
float p,r,t,w;
printf("enter the principal=");
scanf("%f",&p);
printf("enter the rate of interest=");
scanf("%f",&r);
printf("enter the time period of interest=");
scanf("%f",&t);
w=(p*r*t)/100;
printf("simple interest=%.2f",w);
printf("\n\n");
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
	printf("\n\n");
}

void calcelecticbill()//definition part
{


    char a;
    float b,h,i,j,k,l;
    printf("Enter the customer name-");
    scanf("%7c",&a);
    printf("Enter the customer no.=");
    scanf("%f",&b);
    printf("Enter the units=");
    scanf("%f",&h);
    if(h>=0&&h<=200)
    (i=(h*0.5),
    printf("The all total charges=%.2f",i));
    else if(h>200&&h<=400)
   ( j=((h*0.65)+100),
    printf("The all total charges=%.2f",j)); 
    else if(h>400&&h<=600)
    (k=((h*0.85)+230),
    printf("The all total charges=%.2f",k));
	else if(h>600&&h>600)
	(l=((h*1)+390),
    printf("The all total charges=%.2f",l));	
	else if(h=(-1)*h)
	printf("NA");
	else
	printf("DID NOT FOUND THE CHARGE");    
	printf("\n\n");
}

void nestsdstardiagram()//definition part
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
if(i!=j)
printf("*");
else
printf("=");
}
printf("\n");
}
printf("\n\n");
}
void series6()//definition part
{

	int b=0,n,i;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;(i++)*(i++))
	{
		b=b+i;
		printf(" %d+",i);
	}
	printf("=%d(THE ADDITION OF ALL EVEN NUMBERS)",b);
	printf("\n\n");
}

void series2()//definition part
{
	int b=0,n,i,h;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		h=i*i;
		b=b+h;
		printf(" %d+",h);
	}
	printf("=%d",b);
	printf("\n\n");
}

void nestedstardiamondshapeddiagram()
{
int i,j,s;
for(i=1;i<=5;i++)
{
for(s=5;s>i;s--)
{
	printf(" ");
}
for(j=1;j<(i*2);j++)
{
printf("*");
}
printf("\n");
}printf(" ");
int a,c,b;
for(a=4;a>=1;a--)
{
for(c=4;c>a;c--)
{
	printf(" ");
}
for(b=1;b<(a*2);b++)
{
printf("*");
}
printf("\n ");
}
printf("\n\n");
}

void series3()//definition part
{

	int b=0,n,i;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=1;i<=n;i=(i+2))
	{
		b=b+i;
		printf(" %d+",i);
	}
	printf("=%d(THE ADDITION OF ALL ODD NUMBERS)",b);
	printf("\n\n");
}

void series4()//definition part
{

	int b=0,n,i,h;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		h=i*i*i;
		b=b+h;
		printf(" %d+",h);
	}
	printf("=%d",b);
	printf("\n\n");
}

void series5()//definition part
{
	int i,f=0,n;
	printf("ENTER THE RANGE=");
	scanf("%d",&n);
	for(i=2;i<=n;i=(i*10)+2)
	{
	f=f+i;
	printf("%d+",i);
	}
printf("=%d",f);
printf("\n\n");
}

void series1()//definition part
{
int a=0,i,n;
printf("enter the range=");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	a=a+i;
	printf("%d+",i);
}
printf("=%d",a);
}






