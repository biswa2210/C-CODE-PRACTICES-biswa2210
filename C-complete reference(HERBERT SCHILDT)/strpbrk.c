//strpbrk()
#include <stdio.h>
#include <string.h>
int main ()
{
   int len;
    char str1[120]="ami shrii shrii vojohori manna";
    char str2[3114]="shjhg";
    char *p;
    p=strpbrk(str1,str2);
    printf(p);
   return(0);
}
