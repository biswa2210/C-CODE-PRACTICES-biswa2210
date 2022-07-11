#include<stdio.h>
#include<time.h>
int main(void)
{
struct tm *local;
time_t t;
t=time(NULL);
local=localtime(&t);
printf("Local time and date : %s\n",asctime(local));
local=gmtime(&t);
printf("UTC time and date   : %s\n",asctime(local));

}
