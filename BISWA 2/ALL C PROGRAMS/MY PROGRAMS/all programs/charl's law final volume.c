#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
char a[100000];
float v1,v2,t1,t2,h,j,f;
printf("Name of the Gas=");
gets(a);
printf("initial volume  of  this gas=");
scanf("%f",&v1);
printf("initial tempture  of this gas(only degree centrigrade)=");
scanf("%f",&t1);
printf("final tempture  of this gas(only degree centrigrade)=");
scanf("%f",&t2);
h=(t2+273);
j=(t1+273);
v2=(h*v1)/j;
printf("final volume of  this gas=%f",v2);
getch();
}

