#include<stdio.h>
#include<conio.h>
int main()
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
	 getch();
	 }


