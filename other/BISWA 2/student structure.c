#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct student
{
 char sn[100],subn[100],subn2[100],subn3[100],subn4[100],subn5[100],charac;
 float a,b,c,d,e,t,perc,avg;
 int srno;
};
struct student s[1000];
void main()
{
system("mode 1000");
int i,n;
printf("enter the no of students : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the student's 1st name : ");
scanf("%s",&s[i].sn);
printf("enter the student roll no : ");
scanf("%d",&s[i].srno);
printf("enter the student's 1st subject name : ");
scanf("%s",&s[i].subn);
printf("enter the student's %s subject no : ",s[i].subn);
scanf("%f",&s[i].a);
printf("enter the student's 2nd subject name : ");
scanf("%s",&s[i].subn2);
printf("enter the student's %s subject no : ",s[i].subn2);
scanf("%f",&s[i].b);
printf("enter the student's 3rd subject name : ");
scanf("%s",&s[i].subn3);
printf("enter the student's %s subject no : ",s[i].subn3);
scanf("%f",&s[i].c);
printf("enter the student's 4th subject name : ");
scanf("%s",&s[i].subn4);
printf("enter the student's %s subject no : ",s[i].subn4);
scanf("%f",&s[i].d);
printf("enter the student's 5th subject name : ");
scanf("%s",&s[i].subn5);
printf("enter the student's %s subject no : ",s[i].subn5);
scanf("%f",&s[i].e);
s[i].t=s[i].a+s[i].b+s[i].c+s[i].d+s[i].e;
s[i].avg=(s[i].t)/(5);
s[i].perc=(((s[i].t)*100)/500);
if(s[i].perc>30&&s[i].perc<=70)
s[i].charac='C';
else if(s[i].perc>70&&s[i].perc<=85)
s[i].charac='B';
else if(s[i].perc>85&&s[i].perc<=100)
s[i].charac='A'
;
else
{
system("color a");
s[i].charac='D';
}
}
printf("\nprint the details");
printf("\n________________________________________________________________________");
printf("\n\n\t\t total  averrage  percentage  grade");
printf("\n_________________________________________________________________________\n");
for(i=0;i<n;i++)
{
system("color b");
printf("\t\t   %s   %d  %.2f   %.2f   %.2f   \t\%c\n",s[i].sn,s[i].srno,s[i].t,s[i].avg,s[i].perc,s[i].charac);
}
getch();
}
