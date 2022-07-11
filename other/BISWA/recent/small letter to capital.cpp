#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[1000],o[100];
	int i,len;
	printf("Enter the string=");
	gets(a);
	len=strlen(a);
	for(i=0;a[i]!='\0';i++)
    {
if(a[i]!=' '&&a[i]>=97&&a[i]<=122)
		{
	a[i]=a[i]-32;

		}	
	
    }
printf("The updated string=%s",a);
getch();
}
