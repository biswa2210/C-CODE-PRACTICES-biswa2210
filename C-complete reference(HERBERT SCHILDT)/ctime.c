#include<time.h>
#include<stdio.h>
int main(void)
{
    time_t lt;
    lt=time(NULL);
    printf(ctime(&lt));
    getch();
}
