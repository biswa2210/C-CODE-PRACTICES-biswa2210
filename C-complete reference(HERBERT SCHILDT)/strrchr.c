//strrchr()
#include <stdio.h>
#include <string.h>
int main ()
{
   int len;
    char str1[12041];
   gets(str1);
    char str2;
    scanf("%c",&str2);
    char *counting;
 counting=strrchr(str1,str2);
 printf(counting);
   return(0);
}
