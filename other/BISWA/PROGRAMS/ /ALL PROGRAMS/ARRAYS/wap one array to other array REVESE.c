// c program io store deta one array in to another array with reverse(given input n(n<100000)(first name & last name) only one space must)
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
char x[100000];
int c=1,i;
printf("enter your name=");
gets(x);
//print original name
printf("\n\noriginal name= ");
for(i=0;x[i]!='\0';i++)
{
printf("%c",x[i]);
c++;
}
//store another array(REVERSE)
printf("\n\ the reverse name= ");
for(i=c-1;i>=0;i--)
{
printf("%c",x[i]);
}
getch();
}

