#include<locale.h>
#include<stdio.h>
int main(void)
{
printf(setlocale(LC_ALL,""));
return 0;
}
