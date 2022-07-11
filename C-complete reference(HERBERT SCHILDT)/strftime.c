#include<stdio.h>
#include<time.h>
int main(void)
{
struct tm *ptr;
time_t lt;
char str[80];
lt=time(NULL);
ptr=localtime(&lt);
strftime(str,100,"It is now %H %p.",ptr);
printf(str);
return 0;
}
