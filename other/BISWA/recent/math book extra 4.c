#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,g,h,k,j,f,a=2;
printf("Enter the range=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("(%d*%d)+",i,a);
    a++;	
}
g=(n*n);
h=(g+n);
k=(n+2);
j=(h/3);
f=(j*k);
printf("=%d",f);
getch();
}



