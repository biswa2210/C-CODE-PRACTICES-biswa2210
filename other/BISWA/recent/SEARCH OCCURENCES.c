//wap to Program to search occurrences of a character in string
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
printf("Enter the character to be OCUURENCE=");
scanf("%c",&j);
 for(i=0;a[i]!='\0';i++)
{
if(a[i]==j)
c++;
}
if(c==0)
printf("\n '%c' character is not present",j);
else 
printf("\nOccurence of character '%c' =%d",j,c);
getch();
}

