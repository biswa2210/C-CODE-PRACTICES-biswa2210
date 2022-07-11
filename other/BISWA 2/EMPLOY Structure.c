#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct employ
{
 char eid[100],en[100],desg;
 float bsal,da,ta,hra,gs,pf,nsal;
};
struct employ e[1000];
void main()
{
system("mode 1000");
system("title Biswa");
int i,n;
printf("enter the no that how many employ are working in 'BISWA PRIVATE LIMITED' : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("ENTER THE EMPLOY ID : ");
scanf("%s",&e[i].eid);
printf("ENTER THE EMPLOY NAME : ");
scanf("%s",&e[i].en);
printf("%s's BASIC SALARY : ",e[i].en);
scanf("%f",&e[i].bsal);
e[i].da=e[i].bsal*0.15;
e[i].ta=e[i].bsal*020;
e[i].hra=e[i].bsal*0.25;
e[i].pf=e[i].bsal*.30;
e[i].gs=(e[i].da+e[i].ta+e[i].hra+e[i].bsal);
e[i].nsal=e[i].gs-e[i].pf;
if(e[i].gs>=0&&e[i].gs<=10000)
e[i].desg='P';
else if(e[i].gs>=10000&&e[i].gs<=20000)
e[i].desg='C';
else if(e[i].gs>=20000&&e[i].gs<=40000)
e[i].desg='E';
else
e[i].desg='B';
}
printf("\n\n\nREAD THIS DETAILS____\nP=PEON\nC=CLARK\nE=EXECUTIVE\nB=BRANCH MAMAGER\n\n\n");
printf("\n________________________________________________________________________________________________________________________________________________________________________________________\n");
printf("\temployid\temployname\temploybasic salary\tDA\tTA\tHRA\t\tGROSS  SALARY NET SALARY  PF DESIGNATION\n");
printf("_______________________________________________________________________________________________________________________________________________________________________________________\n");
for(i=0;i<n;i++)
{
printf("\n\t%s\t\t%s\t\t%.2f\t\t\t%.2f\t%.2f %.2f\t%.2f\t%.2f %.2f   %c ",e[i].eid,e[i].en,e[i].bsal,e[i].da,e[i].ta,e[i].hra,e[i].gs,e[i].nsal,e[i].pf,e[i].desg);
}
}
