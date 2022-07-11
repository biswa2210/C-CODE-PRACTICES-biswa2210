//strncpy
#include <stdio.h>
#include <string.h>
int main ()
{
   int len;
    char str1[12041];
   gets(str1);
    char str2[3114];
    gets(str2);
strncpy(str1,str2,strlen(str2));
 printf(str1);
   return(0);
}
