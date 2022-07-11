#include<time.h>
#include<stdio.h>
int main(void)
{
    struct tm *local;
    time_t lt;
    lt=time(NULL);
    local=localtime(&lt);
    printf(asctime(local));
    getch();
}
