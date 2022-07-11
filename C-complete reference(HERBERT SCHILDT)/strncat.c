//strncat
#include <stdio.h>
#include <string.h>
int main ()
{
   int len;
    char str1[12041];
   gets(str1);
    char str2[3114];
    gets(str2);
    strncat(str2,str1,strlen(str1));
    printf(str2);
   return(0);
}
