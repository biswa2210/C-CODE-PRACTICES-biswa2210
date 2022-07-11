#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
void main()
{
int i,c=0;
char a[10000],j;
printf("Enter the string=");
gets(a);
printf("Enter the character to be find occurences=");
scanf("%c",&j);
for(i=0;a[i]!='\0';i++)
{
   
	 if(a[i]==j)
	{
	c++;
			
	}
}
if(c==0)
printf("\ncharacter is not present=%d",c);
else 
printf("\nOccurence of character=%d",c);
getch();
}

