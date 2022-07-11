#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=0,s=1,ans;
printf("ENTER THE NUMBER OF TERMS=");
scanf("%d",&n);
printf("\nFIBONACCI SERIZE");
printf("\n******************\t");
for(i=0;i<=n;i++)
{
 if(i<=1)
 {
 	ans=i;
 }
 else
 {
 
 ans=(f+s);
 f=s;
 s=ans;
}
 printf(" %d,",ans);
 }
 printf("\n\n\n\n\n\n********************************************************************************");
printf("THANK YOU SIR\n");
getch();
}

