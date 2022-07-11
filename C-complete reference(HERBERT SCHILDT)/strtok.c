#include<stdio.h>
#include<string.h>
int main(void)
{
char str[500];
char *p;
printf("enter the string  :  ");
gets(str);
p=strtok(str," .,:;");
printf("\n\nsplitting...........\n\n");
while(p!=NULL)
{
printf(p);
printf("\n\n");
p=strtok(NULL," .,:;");
}
getch();
}
