#include<stdio.h>
#include<locale.h>
int main(void)
{
struct lconv lc;
lc= *localeconv();
printf("Decimal Symbol is  : %s\n",lc.decimal_point);
return 0;
}
