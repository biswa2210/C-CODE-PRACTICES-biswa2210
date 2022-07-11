#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000];
float v1,v2,t1,t2,h,f;
printf("Name of the Gas=");
gets(a);
printf("initial volume  of  this gas=");
scanf("%f",&v1);
printf("final volume  of  this gas=");
scanf("%f",&v2);
printf("final tempture  of this gas(only degree centrigrade)=");
scanf("%f",&t2);
h=(t2+273);
t1=(h*v1)/v2;
printf("initial tempture of  this gas=%fkelvin",t1);
f=t1-273;
printf("\ninitial tempture of this gas=%fdegree centrigrade",f);
getch();
}

