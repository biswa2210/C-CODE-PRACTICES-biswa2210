#include<time.h>
#include<stdio.h>
int main(void)
{
    time_t start,end;
    volatile long unsigned t;
    start = time(NULL);
    for(t=0;t<50000;t++)
    {end=time(NULL);}
    printf("LOOP USED %f SECONDS .\n",difftime(end,start));
    getch();
}
