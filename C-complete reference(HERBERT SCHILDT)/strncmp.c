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
    int c;
    c=strncmp(str1,str2,9);
if(c==0)
{
printf("str1 & str2 are equal");
}
else if(c>0)
{
printf("str1 greater than str2");
}
else if(c<0)
{
printf("str1 less than str2");
}
   return(0);
}
