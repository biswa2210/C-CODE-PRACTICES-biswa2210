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
printf("initial tempture  of this gas(only degree centrigrade)=");
scanf("%f",&t1);
h=(t1+273);
t2=(h*v2)/v1;
printf("final tempture of  this gas=%fkelvin",t2);
f=t2-273;
printf("\nfinal tempture of this gas=%fdegree centrigrade",f);
getch();
}

