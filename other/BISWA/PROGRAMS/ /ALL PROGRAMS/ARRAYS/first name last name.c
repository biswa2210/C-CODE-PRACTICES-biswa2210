#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
char a[10000],b[100000];
int i,j;
printf("ENTER YOUR FIRST NAME=\n");
gets(a);
printf("\n");
printf("ENTER YOUR last NAME=\n");
gets(b);
printf("NOW YOUR NAME IS= \n\n");
for(i=0;a[i]!='\0';i++)
{
	printf("%c",a[i]);
}
printf(" ");
for(j=0;b[j]!='\0';j++)
{
	printf("%c",b[j]);
}

getch();
}

