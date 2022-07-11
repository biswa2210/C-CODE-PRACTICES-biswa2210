#include<stdio.h>
#include<string.h>
#define SIZE 500
int main(void)
{
char str[SIZE],*p;
strcpy(str,"I am Biswarup");
p=str+5;
memmove(str,p,SIZE);
printf("result after shift :  %s",str);
return 0;
}
