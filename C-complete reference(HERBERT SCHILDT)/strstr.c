#include<stdio.h>
#include<string.h>
int main(void)
{
/*TAKE ANY TWO STRINGS*/
char s1[100]="GEEKSFORGEEKS";
char s2[100]="FOR";
char *p;
//FIND FIRST OCCURENCE OF  S2 IN  S1
p=strstr(s1,s2);
if(p)
{
    printf("\nstring found\n");
    printf("First occurrence of  string  '%s' in '%s' is '%s' ",s2,s1,p);
}
else
{
    printf("\nstring not found\n");
}
getch();
}
