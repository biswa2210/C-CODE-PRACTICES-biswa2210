#include<stdio.h>
#include<time.h>
int main(void)/*print locale and UTC time*/
{
struct tm *local,*gm;
time_t t;
t=time(NULL);
local=localtime(&t);
printf("Local time and date : %s\n",asctime(local));
gm=gmtime(&t);
printf("Coordinated Universal Time And Date : %s",asctime(gm));
return 0;
}
