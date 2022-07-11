#include<stdio.h>
#include<time.h>
int main(void)
{
time_t lt;
struct tm *local,*gm;
lt=time(NULL);
local=localtime(&lt);
gm=gmtime(&lt);
printf("\n\n");
printf("Local time ::   ");
printf(asctime(local));
printf("\n\n");
printf("UTC time   ::   ");
printf(asctime(gm));
printf("\n\n");
}
