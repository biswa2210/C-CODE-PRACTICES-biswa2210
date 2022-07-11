#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h,i,sum=0,f1=1,f2=1,f3=0,f4=1,f5=1,f6=1,f7=0,f8=1,f9=1,f10=1,f11=0,f12=1;
			printf("enter the values(positive integers) of this determinants(row-wise  taken)...\n");
			scanf("%d  ",&a);
			scanf("%d  ",&b);
			scanf("%d\n",&c);
			scanf("%d  ",&d);
			scanf("%d  ",&e);
			scanf("%d\n",&f);
			scanf("%d  ",&g);
			scanf("%d  ",&h);
			scanf("%d\n",&i);
			printf("\nnow \n the determinants is------\n\n");
			printf("\t\t\t\t%d  %d  %d\n\n\t\t\t\t%d  %d  %d\n\n\t\t\t\t%d  %d  %d",a,b,c,d,e,f,g,h,i);
			printf("\n\n");
			f1=(e*i);
			f2=(f*h);
			f3=(f1-f2);
			f4=(a*f3);
			f5=(d*i);
			f6=(f*g);
			f7=(f5-f6);
			f8=((-1)*b*f7);
			f9=(d*h);
			f10=(e*g);
			f11=(f9-f10);
			f12=(c*f11);
			sum=(f4+f8+f12);
			printf("\n\nthe result of this determinants is= %d",sum);
			getch();
}


