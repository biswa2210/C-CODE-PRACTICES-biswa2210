// c program io store deta one array in to another array(given input n(n<100000)(first name & last name) only one space must)
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
char x[100000];
int c=1,i;
printf("enter your name=");
gets(x);
//print original name
printf("\n\noriginal name=\n");
for(i=0;x[i]!='\0';i++)
{
printf("%c",x[i]);
c++;
}
//store another array
printf("\n\nagain the original name=\n");
for(i=0;i<=c-1;i++)
{
printf("%c",x[i]);
}
getch();
}

